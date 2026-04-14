class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int,int> mp;
       for(int i = 0; i<nums.size(); i++){
        if(mp.find(nums[i]) != mp.end()){
          mp[nums[i]]+=1  ;
        }
        else{
        mp[nums[i]]= 1;
        }
       }

       vector<vector<int>> freq(nums.size()+1);
       for(const auto& entry: mp){
        freq[entry.second].push_back(entry.first);
       }
       vector<int> res;
       for (int i = freq.size()-1; i>0; i--){
        for(int n: freq[i]){
            res.push_back(n);
            if(res.size()== k){
                return res;
            }
        }
       }
    }
};
