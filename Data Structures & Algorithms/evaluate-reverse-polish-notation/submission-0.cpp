class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ref;

    for(const string& c : tokens){
        if( c == "+"){
         int a = ref.top(); ref.pop();
         int b = ref.top(); ref.pop();
         ref.push(a + b);
        }
        else if( c == "-"){
            int a = ref.top(); ref.pop();
         int b = ref.top(); ref.pop();
         ref.push(b - a);
        }
        else if( c == "*"){
           int a = ref.top(); ref.pop();
         int b = ref.top(); ref.pop();
         ref.push(a * b);
            
        }
        else if( c == "/"){
            
           int a = ref.top(); ref.pop();
         int b = ref.top(); ref.pop();
         ref.push(b / a);
        }
        else{
            ref.push(stoi(c));
        }
    }
    return ref.top();
        
    }
};
