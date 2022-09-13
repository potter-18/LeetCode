class Solution {
private:
    set<vector<int> > ans;
    void subsetCal(int i, vector<int>& nums, int n, vector<int> &subset){
        if(i == n){
            ans.insert(subset);
            return;
        }
        subset.push_back(nums[i]);
        subsetCal(i+1,nums,n,subset);
        subset.pop_back();
        subsetCal(i+1,nums,n,subset);
            
    }
public:
    vector<vector<int>> subsets(vector<int>& nums){
        int n = nums.size();
        vector<int> subset;
        vector<vector<int>> powerSet;
        subsetCal(0,nums,n,subset);
        
        for(auto it : ans){
            powerSet.push_back(it);
        }
        sort(powerSet.begin(), powerSet.end());
        return powerSet;
    }
};