class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map1, map2;
        int a=0, b=0;
        
        for(int i=0; i<s.length(); i++) {
            if(map1[s[i]] && map1[s[i]] != t[i]) return false;
            if(map2[t[i]] && map2[t[i]] != s[i]) return false;
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        
        return true;
    }
};