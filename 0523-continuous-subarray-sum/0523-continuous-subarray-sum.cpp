class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s;
        s.insert(0);
        int sum = nums[0];
        
        for(int i = 1; i < n; i++){
            sum += nums[i];
            if(s.find(sum%k) != s.end()) return true;
            s.insert((sum-nums[i])%k);
        }
        
        return false;
    }
};