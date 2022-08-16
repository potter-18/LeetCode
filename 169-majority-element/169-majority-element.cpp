
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = 50000;
        vector<int> fp(n,0);
        vector<int> fn(n,0);
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                int k = abs(nums[i]);
                fn[k]++;
            }
            else
                fp[nums[i]]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                if(fn[abs(nums[i])] > nums.size()/2){
                    return nums[i];
                }  
            }
            else if(fp[nums[i]] > nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};