class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int arr[n+1];
        memset(arr, -1, sizeof(arr));
        
        for(int i=0; i<n; i++) {
            if(arr[nums[i]] != -1) {
                return nums[i];
            } else {
                arr[nums[i]] = 1;
            }
        }
        
        return -1;
    }
};