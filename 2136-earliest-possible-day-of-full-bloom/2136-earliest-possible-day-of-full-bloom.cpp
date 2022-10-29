class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime){
        int n = plantTime.size();
        vector<pair<int,int>> m;
        
        for(int i = 0; i < n; i++){
            m.push_back({growTime[i],plantTime[i]});
        }
        
        sort(m.begin(),m.end());
        int seedTime = 0;
        int totalTime = 0;
        
        for(int i = n-1; i >= 0; i--){
            seedTime += m[i].second;
            if(seedTime > totalTime) totalTime += (seedTime-totalTime);
            if(seedTime+m[i].first > totalTime) totalTime += ((m[i].first+seedTime)-totalTime);
        }
        
        return totalTime;
    }
};