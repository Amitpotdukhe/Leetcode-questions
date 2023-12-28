class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> map;
        int i=0, j=0, ans=0, freq=0;
        
        while(j<fruits.size()) {
            map[fruits[j]]++;
            freq++;
            
            while(map.size()>2) {
                map[fruits[i]]--;
                if(map[fruits[i]] == 0) map.erase(fruits[i]);
                freq--;
                i++;
            }
            
            ans = max(ans, freq);
            j++;
        }
        return ans;
    }
};