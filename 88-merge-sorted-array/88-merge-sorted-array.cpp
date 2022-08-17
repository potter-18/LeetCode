class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> total;
        
        
        for(int i = 0; i < m; i++){
            total.push_back(nums1[i]);
        }
        for(auto it:nums2){
            total.push_back(it);
        }
        
        sort(total.begin(),total.end());
        
        for(int i = 0; i < m+n; i++){
            nums1[i] = total[i];
        }
        
        
    }
};