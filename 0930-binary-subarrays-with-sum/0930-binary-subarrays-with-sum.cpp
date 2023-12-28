class Solution {
public:
    //approach 1
    // int numSubarraysWithSum(vector<int>& nums, int goal) {
    //     int i=0, j=0, n=nums.size(), ans=0 , sum=0;

    //     while(j<n) {
    //         sum += nums[j];
            
    //         while(sum > goal) {
    //             sum -= nums[i];
    //             i++;
    //         }
    //         ans += (j-i+1);
    //         j++;
    //     }

    //     return ans;
    // }

    int numSubarraysWithSum(vector<int>& nums, int k) {
//         int ans=0, sum=0;
        //aproach 2
//         map<int, int> map;

//         for(int i=0; i<nums.size(); i++) {
//             sum += nums[i];
//             if(sum == k) {
//                 ans++;
//             }

//             if(map.find(sum-k) != map.end()) {
//                 ans += map[sum-k];
//             }
//             map[sum]++;
//         }
        if(k==0) {
            return solve(nums, k);
        }
        return solve(nums, k)-solve(nums,k-1);
    }
    
    // approach 3
    int solve(vector<int>& nums, int k) {
        int i=0, j=0, ans=0, sum=0;
        
        while(j<nums.size()) {
            sum += nums[j];
            
            while(sum!=0 && sum > k) {
                sum -= nums[i];
                i++;
            }
            cout<<sum<<" ";
            ans += j-i+1;
            j++;
        }
        
        return ans;
    }

};