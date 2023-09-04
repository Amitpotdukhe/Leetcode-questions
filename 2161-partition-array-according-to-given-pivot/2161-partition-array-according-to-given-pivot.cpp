class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int low=0, same=0, high=0;
        
        for(auto it : nums) {
            if(it < pivot) {
                low++;
            } else if(it == pivot) same++;
        }
        
        cout<<low<<" "<<same;
        high = low+same;
        same = low;
        low = 0;
        vector<int> ans(nums.size());
        
        for(auto it : nums) {
            if(it < pivot) {
                ans[low++] = it;
            } else if(it == pivot) {
                ans[same++] = it;
            } else {
                ans[high++] = it;
            }
        }
        
        return ans;
    }
};