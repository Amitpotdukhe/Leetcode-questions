class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        
        unordered_map<int, bool> map;
        
        for(auto i : nums) map[i] = true;
        
        for(auto i : nums) {
            if(map[diff+i] and map[i-diff]) {
                ans++;
            }
        }
        
        return ans;
    }
};