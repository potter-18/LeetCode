class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        int currSum = 0;
        int sum = INT_MIN;
        
        
        for(int i = 0; i < n; i++){
            currSum += nums[i];
            sum = max(currSum,sum);
            currSum = currSum < 0 ? 0:currSum;
        }
        
        int m = INT_MAX;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
            currSum += nums[i];
            m = min(currSum,m);
            currSum = currSum > 0 ? 0:currSum;
        }
        if(totalSum == m){
            m = 0;
        }
        return max(sum,totalSum-m);
    }
};