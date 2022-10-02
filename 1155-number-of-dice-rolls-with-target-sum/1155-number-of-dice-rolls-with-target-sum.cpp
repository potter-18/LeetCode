class Solution {
public:
    size_t count = 0;
    int mod = 1e9 + 7;
    vector<vector<int>> dp;
    
    long long checkVal(int ind, int k, int target){
        if(target == 0 && ind == 0)
            return 1;
        if(target <= 0 || ind <= 0)
            return 0;
        
        
        if(dp[ind][target] != -1){
            return dp[ind][target]; 
        }
        
        long long sum = 0;
        for(int i = 1; i <= k; i++){
            sum = (sum%mod + checkVal(ind-1,k,target-i)%mod)%mod;
        }
        
        
        return dp[ind][target] = sum;
        
        
    }
    int numRollsToTarget(int n, int k, int target){
        dp.resize(n+1, vector<int>(target+1,-1));
        return checkVal(n,k,target);
    }
};