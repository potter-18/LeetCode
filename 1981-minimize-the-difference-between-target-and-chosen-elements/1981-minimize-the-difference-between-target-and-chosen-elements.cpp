class Solution {
public:
    int diff = INT_MAX;
    int checkMin(vector<vector<int>>& mat, int row, int target, int sum,  vector<vector<int>>& dp){
        if(row >= mat.size()){
            return abs(target-sum);
        }
        
        if(dp[sum][row] != -1){
            return dp[sum][row];
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < mat[0].size(); i++){
            ans = min(checkMin(mat,row+1,target,sum+mat[row][i],dp),ans);
            if(ans == 0){
                break;
            }
        }
        
        return dp[sum][row] = ans;
    }
    
    int minimizeTheDifference(vector<vector<int>>& mat, int target){
        for(int i = 0; i < mat.size(); i++){
            sort(mat[i].begin(), mat[i].end());
        }
        vector<vector<int>> dp(5000, vector<int>(80,-1));
        return checkMin(mat,0,target,0,dp);
    }
};