class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX, maxProfit = 0;
        
        for(auto it:prices){
            minn = min(minn,it);
            maxProfit = max(maxProfit,it-minn);
        }
        return maxProfit;
    }
};