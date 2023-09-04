class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0, j=s.length()-1;
        
        while(i<j) {
            if(s[i] != s[j]) {
                char small = s[i] < s[j] ? s[i] : s[j];
                cout<<small<<" ";
                s[small == s[i] ? j : i] = small;
                i++;
                j--;
            } else {
                i++;
                j--;
            }
        }
        
        return s;
    }
};