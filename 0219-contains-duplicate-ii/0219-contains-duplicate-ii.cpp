class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        int i = 0;
        int n = nums.size();
        unordered_map<int,vector<int>> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]].push_back(i);
        }
        for(auto x : m){
            if((x.second).size() > 1){
                for(int i = 1; i < (x.second).size(); i++){
                    cout << x.second[i-1] << " " << x.second[i] << "\n";
                    if(abs(x.second[i-1]-x.second[i]) <= k) return true;
                }
            }
        }
        return false;
    }
};