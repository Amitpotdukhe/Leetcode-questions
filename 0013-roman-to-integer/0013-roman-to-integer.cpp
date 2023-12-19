class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int ans = 0;
        
        for(int i=0; i<s.length();) {
            int k=0;
            if(i != s.length()-1 && map[s[i]] < map[s[i+1]]) {
                k = map[s[i+1]]-map[s[i]];
                i+=2;
            } else {
                k = map[s[i]];
                i++;
            }
            
            ans+=k;
        }
        
        return ans;
    }
};