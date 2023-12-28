class Solution {
public:
    int solve(vector<int>& nums, int k) {
        int i=0, j=0, n=nums.size(), ans=0, odd=0;

        while(j<n) {
            if(nums[j]%2==1) odd++;
            
            while(odd>k) {
                if(nums[i]%2==1) odd--;
                i++;
            }
            
            ans+=j-i+1;
            j++;
        }
        
        return ans;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        

        return solve(nums, k)-solve(nums,k-1);
    }
};