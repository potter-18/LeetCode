class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size(), mid;
        
        while(low <= high){
            mid = low + (high-low)/2;
            if(mid==0){
                return nums[low];
            }
            
            if(nums[mid] == nums[mid-1]){
                if((mid-low-1)%2 != 0){
                    high = mid-2;
                }else{
                    low = mid+1;
                }
            }
            else if(nums[mid] == nums[mid+1]){
                if((mid-low)%2 != 0){
                    high = mid-1;
                }else{
                    low = mid+2;
                }
            }else{
                return nums[mid];
            }
        }
        return nums[mid];
    }
};