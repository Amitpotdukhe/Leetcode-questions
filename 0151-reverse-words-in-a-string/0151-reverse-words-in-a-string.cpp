class Solution {
public:
    string reverseWords(string s) {
        string ans = "";string word = "";
        
        int i=0;
        while(s[i]==' ') i++;
        int j = s.length()-1;
        while(s[j]==' ') j--;
        
        while(i<s.length()) {
            if(s[i]==' ') {
                
                if(word.length()>0) {
                    ans = word + " " + ans;
                    i++;
                    word = "";
                }
                while(s[i]==' ') i++;
                
            } else {
                word += s[i];
                i++;
            }
        }
        if(word.length()>0) {
            
        ans = word +" "+ ans;
        }
        ans.pop_back();
        
        return ans;
    }
};