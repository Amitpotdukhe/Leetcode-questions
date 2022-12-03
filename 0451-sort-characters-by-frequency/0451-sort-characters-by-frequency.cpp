class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        for(auto i: s) {
            map[i]++;
        }
        
        priority_queue<pair<int, char>> pq;
        
        for(auto it : map) {
            pq.push({it.second, it.first});
        }
        
        string ans="";
        while(!pq.empty()) {
            int x = pq.top().first;
            while(x--) {
                ans+=pq.top().second;
            }
            pq.pop();
        }
        
        return ans;
    }
};