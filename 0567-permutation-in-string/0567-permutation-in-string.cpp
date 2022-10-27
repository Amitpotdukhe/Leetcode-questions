class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> map1, map2;
        
        for(auto i : s1) map1[i]++;
        
        int i=0, j=0;
        while(j<s2.length()) {
            map2[s2[j]]++;
            if(j-i+1 < s1.length()) {
                j++;
            } else {
                if(map1 == map2) {
                    return true;
                }
                map2[s2[i]]--;
                if(map2[s2[i]] <= 0) {
                    map2.erase(s2[i]);
                }
                i++;
                j++;
            }
        }
        
        return false;
    }
};