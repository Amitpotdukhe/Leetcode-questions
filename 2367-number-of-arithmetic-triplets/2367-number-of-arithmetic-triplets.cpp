class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++) {
            
            int j=i+1;
            while(j<nums.size()) {
                
                int k=j+1;
                while(k<nums.size()) {
                    
                    int sum1 = nums[j]-nums[i];
                    int sum2 = nums[k]-nums[j];
                    if(sum1 == diff and sum2 == diff) {
                        ans++;
                    }
                    k++;
                    
                }
                
                j++;
            }
            
        }
        
        return ans;
    }
};