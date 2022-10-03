class Solution {
public:
    int mini(vector<int>& arr){
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            maxSum = max(sum,maxSum);
            sum = sum < 0 ? 0 : sum;
        }
        return maxSum;
    }
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2){
        vector<int> d1, d2;
        int sum1= 0, sum2 = 0;
        
        for(int i = 0; i < nums1.size(); i++){
            sum1 += nums1[i];
            sum2 += nums2[i];
            d1.push_back(nums1[i]-nums2[i]);
            d2.push_back(nums2[i]-nums1[i]);
        }
        
        return sum1+sum2 -min(sum1-mini(d1),sum2-mini(d2));
        
    }
};