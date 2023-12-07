class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = 0, curr=0;
        for(auto it : nums ){
            if(it == 0) {
                len=max(len,curr);
                curr=0;
            } else {
                curr++;
            }
        }
        len=max(len,curr);
        return len;
    }
};