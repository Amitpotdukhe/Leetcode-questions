class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;string ans="";
        
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='(') {
                if(cnt) {
                    ans+='(';
                    cnt++;
                } else{
                    cnt++;
                }
                
            } else {
                --cnt;
                if(cnt) {
                    ans+=')';
                }
            }
        }
        
        return ans;
    }
};