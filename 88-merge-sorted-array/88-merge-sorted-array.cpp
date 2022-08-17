class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m);
        int gap = ceil((m+n)/2);
        
        while(gap > 0){
            int i = 0; 
            int j = gap;
            
            while(j < (m+n)){
                if(j < m && nums1[i] > nums1[j])
                    swap(nums1[i],nums1[j]);   
                else if(i < m && j >= m && nums1[i] > nums2[j-m])
                    swap(nums1[i],nums2[j-m]);   
                else if(i >= m && j >= m && nums2[i-m] > nums2[j-m])
                    swap(nums2[i-m],nums2[j-m]);
                
                i++;
                j++;
                
            }
            if(gap == 1)
                gap = 0;
            else
                gap = ceil((double)gap/2);
        }
        
        for(auto it:nums2){
            nums1.push_back(it);
        }
        
        
        
    }
};