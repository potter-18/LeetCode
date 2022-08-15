class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        nums1.resize(m);
        
        while(i<m && j<n){
            if(nums1[i] > nums2[j]){
                int temp = nums1[i];
                nums1[i] = nums2[j];
                nums2[j] = temp;
            
                int first = nums2[0];
                
                for(int k = 1; k < n && first > nums2[k]; k++){
                    swap(nums2[k-1],nums2[k]);
                    first = nums2[k];
                }
            }
            i++;
        }
        
        for(auto it:nums2){
            nums1.push_back(it);
        }
    }
};