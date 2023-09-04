class Solution {
public:
    string reverseWords(string s) {
        int i=0, j=0;
        while(j<s.length()) {
            if(s[j] == ' ') {
                int x = j-1;
                cout<<j<<" ";
                while(i<x) {
                    char t = s[i];
                    s[i] = s[x];
                    s[x] = t;
                    i++;
                    x--;
                }
                j++;
                i = j;
                
            } else {
                j++;
            }
        }
        
        while(i<j-1) {
            char x = s[i];
            s[i] = s[j-1];
            s[j-1] = x;
            i++;
            j--;
        }
        cout<<endl;
        cout<<i<<" "<<j;
        return s;
    }
};