class Solution {
    int ans = 0;
private:
    int maxLen(int i, int j, vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& dp){
        if(i >= nums1.size() || j >= nums2.size())
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        maxLen(i+1,j,nums1,nums2,dp);
        maxLen(i,j+1,nums1,nums2,dp);
        
        if(nums1[i] == nums2[j])
            dp[i][j] = 1 + maxLen(i+1,j+1,nums1,nums2,dp);
        else
            dp[i][j] = 0;
        
        ans = max(ans,dp[i][j]);
        return dp[i][j];
    }
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(1001, vector<int>(1001,-1));
        maxLen(0,0,nums1,nums2,dp);
        return ans;
    }
};