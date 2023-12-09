class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(), ans=0, sum=0;
        
        map<int, int> map;
        for(auto it : nums) {
            sum+=it;
            if(sum==k) {
                ans++;
            }
            int findSum = sum-k;
            if(map.find(findSum) != map.end()) {
                ans+=map[findSum];
            }
            map[sum]++;
        }
        
        return ans;
    }
};