class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0],currSum = 0;
        
        for(auto it:nums){
            currSum += it;
            sum = max(currSum,sum);
            if(currSum < 0) currSum = 0;
        }
        
        return sum;
    }
};