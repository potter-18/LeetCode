class Solution {
public:
    int cCount(vector<int>& nums, int target, vector<int> &dp){
        if(target == 0){
            return 1;
        }
        
        if ( dp[target] != -1 ){
            return dp[target];
        }
        
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= target){
                total += cCount(nums,target-nums[i],dp);
            }
        }
        return dp[target] = total;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> dp(target+1,-1);
        return cCount(nums,target,dp);
    }
};