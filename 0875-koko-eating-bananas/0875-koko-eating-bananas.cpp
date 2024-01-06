class Solution {
public:
    bool solve(long long speed, vector<int>& piles, int h) {
        long long hours=0, curr=0;
        for(auto it : piles) {
            if(speed==0) return false;
            if(it%speed==0) {
                hours += it/speed;
            } else {
                hours += (it/speed)+1;
            }
        }
        if(hours>h) return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long i=1, j=*max_element(begin(piles), end(piles));
        long long ans=INT_MAX;
        
        while(i<=j) {
            long long speed = i+(j-i)/2;
            
            bool canEat = solve(speed, piles, h);
            cout<<speed<<"-"<<canEat<<" ";
            if(canEat) {
                
                ans=min(ans, speed);
                j=speed-1;
            } else {
                i=speed+1;
            }
        }
        
        return ans;
    }
};