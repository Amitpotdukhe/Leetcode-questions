class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        for(auto i : nums) {
            if(i>0) {
                pos.push_back(i);
            } else {
                neg.push_back(i);
            }
        }
        
        vector<int> ans;
        int i=0, j=0;
        while(i<pos.size() and j<neg.size()) {
            ans.push_back(pos[i]);
            ans.push_back(neg[j]);
            i++, j++;
        }
        
        return ans;
    }
};