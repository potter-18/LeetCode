class Solution {
private:
    void permuCal(int ind, vector<int> &nums, vector<vector<int>> &allPermute){
        if(ind >= nums.size()){
            allPermute.push_back(nums);
            return;
        }
        
        for(int i = ind; i < nums.size(); i++){
            swap(nums[ind],nums[i]);
            permuCal(ind+1,nums,allPermute); 
            swap(nums[ind],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> allPermute;
        permuCal(0,nums,allPermute);
        
        return allPermute;
    }
};