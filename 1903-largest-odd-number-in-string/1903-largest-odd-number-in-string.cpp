class Solution {
public:
    string largestOddNumber(string num) {
        int idx=0;bool flag=false;
        for(int i=0; i<num.length(); i++) {
            if((num[i]-'0')%2==1) {
                idx=i;
                flag=true;
            }
        }
        
        return flag? num.substr(0,idx+1):"";
    }
};