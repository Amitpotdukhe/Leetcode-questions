class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length() == 1) return false;
        
        stack<char> stack;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == '(') {
                if(!stack.empty() && stack.top() == '(' && locked[i] == 0) {
                    stack.pop();
                } else {
                    stack.push(s[i]);
                }
            } else {
                if(stack.empty() && locked[i]=='0') {
                    stack.push('(');
                } 
                else if(stack.top() == '(') {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        
        return stack.empty();
    }
};