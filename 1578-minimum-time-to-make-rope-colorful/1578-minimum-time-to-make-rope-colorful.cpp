class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = neededTime.size();
        int l = 0, r = 1;
        int timeReq = 0;
        bool check = false;
        
        while(l < n && r < n && l < r){
            if(colors[l] == colors[r]){
                if(neededTime[l] < neededTime[r]){
                    timeReq += neededTime[l];
                }
                else{
                    timeReq += neededTime[r];
                    check = true;
                    r++;
                    continue;
                }
            }
            if(check){
                check = false;
                l = r;
                r++;
            }else{
                l++;
                r++;
            }
            
        }
        
        return timeReq;
    }
};