class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        
        int i;
        int minn = prices[0];
        for(i = 0; i < n-1; i++){
            // cout << "minn: " << minn << " \n";
            if(prices[i] < prices[i+1]){
                // cout << prices[i] << "--" << prices[i+1] << " \n";
                continue;
            }
            else{
                profit += (prices[i]-minn) ;
                // cout << "profit: " << (prices[i]-minn) << "\n";
                minn = prices[i+1];
            }
            // cout << "\n";
        }
        
        profit += (prices[i]-minn) ;
        
        
        return profit;
    }
};