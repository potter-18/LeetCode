class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        nums1.resize(m);
        
        for(auto it:nums1){
            arr.push_back(it);
        }
        
        for(auto it:nums2){
            arr.push_back(it);
        }
        
        sort(arr.begin(),arr.end());
        
        
        nums1.resize(0);
        for(auto it:arr){
            nums1.push_back(it);
        }
        
    }
};