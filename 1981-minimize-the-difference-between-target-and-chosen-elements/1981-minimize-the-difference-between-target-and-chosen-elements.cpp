class Solution {
public:
    int dp[71][4901];
    int diff = INT_MAX;
    int checkMin(vector<vector<int>>& mat, int row, int target, int sum){
        if(row >= mat.size()){
            return abs(target-sum);
        }
        
        if(dp[row][sum] != -1){
            return dp[row][sum];
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < mat[0].size(); i++){
            ans = min(checkMin(mat,row+1,target,sum+mat[row][i]),ans);
            if(ans == 0){
                break;
            }
        }
        
        return dp[row][sum] = ans;
    }
    
    int minimizeTheDifference(vector<vector<int>>& mat, int target){
        for(int i = 0; i < mat.size(); i++){
            sort(mat[i].begin(), mat[i].end());
        }
        
        for(int i = 0; i < 71; i++){
            for(int j = 0; j < 4901; j++){
                dp[i][j] = -1;
            }
        }
        return checkMin(mat,0,target,0);
    }
};