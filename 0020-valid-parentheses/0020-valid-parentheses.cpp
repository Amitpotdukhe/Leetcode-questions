class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(auto it : s) {
            if(it=='(' || it=='[' || it=='{') {
                stack.push(it);
            } else {
                if(stack.empty()) return false;
                char c = stack.top();
                if(c=='(' and it!=')') return false;
                if(c=='[' and it!=']') return false;
                if(c=='{' and it!='}') return false;
                stack.pop();
            }
        }
        
        return stack.empty();
    }
};