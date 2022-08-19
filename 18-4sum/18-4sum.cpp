class Solution {
public: 
    bool binarySearch(vector<int>& nums, int low, int high, int &mid, long long target){
        while(low <= high){
            mid = low + (high-low)/2;
                        
            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return false;
    }
        
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        set<vector<int> > s;
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j+1; k < n; k++){
                    long long m = (long long)target-(long long)nums[i]-(long long)nums[j]-(long long)nums[k];
                    int low = k + 1;
                    int high = n - 1;
                    int mid = 0;
                    if(binarySearch( nums,low,high,mid,m)){
                        s.insert({nums[i],nums[j],nums[k],nums[mid]});
                    }
                }
            }
        }
        
        vector<vector<int> > ans(s.begin(),s.end());
        
        return ans;
    }
};