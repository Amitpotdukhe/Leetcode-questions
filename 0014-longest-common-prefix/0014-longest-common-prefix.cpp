class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++) {
            int n=ans.length(), m=strs[i].length();
            int j=0;
            while(j<n and j<m) {
                if(strs[i][j] != ans[j]) {
                    ans = ans.substr(0, j);
                    break;
                }
                j++;
            }
        }
        
        return ans;
    }
};