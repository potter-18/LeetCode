class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings){
        int n = buildings.size();
        multiset<int> pq;
        vector<pair<int,int>> newB;
        
        for(int i = 0; i < n; i++){
            newB.push_back({buildings[i][0],-1*buildings[i][2]});
            newB.push_back({buildings[i][1],buildings[i][2]});
        }
        
        sort(newB.begin(),newB.end());
        
        vector<vector<int>> ans;
        pq.insert(0);
        int prev = 0;
        
        for(int i = 0; i < newB.size(); i++){
            if(newB[i].second < 0){
                pq.insert(-1*newB[i].second);
            }else{
                auto it = pq.find(newB[i].second);
                pq.erase(it);
            }
            int curr = *pq.rbegin();
            if(curr != prev){
                ans.push_back({newB[i].first,curr});
                prev = curr;
            }
        }
        
        return ans;
    }
};