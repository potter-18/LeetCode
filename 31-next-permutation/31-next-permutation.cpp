class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),k = -1,l = -1;
        
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                k = i;
                break;
            }
        }
        
        if(k < 0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i = n-1; i >= 0; i--){
                if(nums[i] > nums[k]){
                    l = i;
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin() + k + 1,nums.end());
        }
    }
};