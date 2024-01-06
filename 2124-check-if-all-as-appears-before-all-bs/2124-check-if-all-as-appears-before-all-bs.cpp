class Solution {
public:
    bool checkString(string s) {
        bool flag=false;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='b') flag=true;
            if(s[i]=='a' and flag==true) return false;
        }
        
        return true;
    }
};