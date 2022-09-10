class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        
        int i;
        int minn = prices[0];
        for(i = 0; i < n-1; i++){
            if(prices[i] < prices[i+1]){
                continue;
            }
            else{
                profit += (prices[i]-minn) ;
                minn = prices[i+1];
            }
        }
        
        profit += (prices[i]-minn) ;
        
        return profit;
    }
};