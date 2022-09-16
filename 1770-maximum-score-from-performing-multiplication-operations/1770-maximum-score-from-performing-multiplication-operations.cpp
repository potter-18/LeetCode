class Solution {
private:
    int checkMax(vector<int>& nums, vector<int>& mult, int ind, int l, int r, int score, vector<vector<int>> &dp){
        
        if(ind == mult.size()){
            return 0;
        }
        
        if(dp[l][ind]!= INT_MIN){
            return dp[l][ind];
        }
        
        int temp1 = nums[l]*mult[ind] + checkMax(nums,mult,ind+1,l+1,r,score,dp);
        
        int temp2 = nums[r]*mult[ind] + checkMax(nums,mult,ind+1,l,r-1,score,dp);
        
        dp[l][ind] = max(temp1,temp2);
        
        return dp[l][ind];
        
    } 
    
public:
    int maximumScore(vector<int>& nums, vector<int>& mult) {
        int n = nums.size();
        int m = mult.size();
        int score = 0;
        vector<vector<int>> dp(m, vector<int>(m,INT_MIN));
        
        return checkMax(nums,mult,0,0,n-1,score, dp);
    }
};