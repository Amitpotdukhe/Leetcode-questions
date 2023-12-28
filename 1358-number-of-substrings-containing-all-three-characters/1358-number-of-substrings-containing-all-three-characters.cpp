class Solution {
public:
    int solve(string s, int n) {
        unordered_map<char, int> map;
        int ans=0, i=0, j=0;

        while(j<s.length()) {
            map[s[j]]++;
            
            while(map.size() > n) {
                map[s[i]]--;
                if(map[s[i]] == 0) map.erase(s[i]);
                i++;
            }

            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numberOfSubstrings(string s) {
        

        // while(i<s.length()) {
        //     map[s[i]]--;
        //     if(map[s[i]] == 0) map.erase(s[i]);
        //     i++;
        //     if(map.size() == 3) {
        //         ans++;
        //     }
        // }

        return solve(s, 3) - solve(s, 2);
    }
};