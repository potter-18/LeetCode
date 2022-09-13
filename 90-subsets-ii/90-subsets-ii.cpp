class Solution {
private:
    set<vector<int> > ans;
    void subsetCal(int i, vector<int>& nums, int n, vector<int> &subset){
        if(i == n){
            ans.insert(subset);
            return;
        }
        
        // selecting the element
        subset.push_back(nums[i]);
        subsetCal(i+1,nums,n,subset);
        
        // Not selecting the element
        subset.pop_back();
        subsetCal(i+1,nums,n,subset);
            
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        int n = nums.size();
        vector<int> subset;
        vector<vector<int>> powerSet;
        sort(nums.begin(),nums.end());
        
        subsetCal(0,nums,n,subset);
        
        for(auto it : ans){
            powerSet.push_back(it);
        }
        
        return powerSet;
    }
};