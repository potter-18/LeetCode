class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> num;
        vector<int> ans;
        num = nums;
        sort(num.begin(),num.end());
        
        int i = 0, j = n-1;
        while(i<j){
            if(num[i]+num[j] == target){
                break;
            }
            
            if(num[i]+num[j] > target)
                j--;
            else
                i++;
        }
        
        for(int k = 0; k < n; k++){
            if(nums[k] == num[i] || nums[k] == num[j]){
                ans.push_back(k);
            }
        }
        return ans;
    }
};