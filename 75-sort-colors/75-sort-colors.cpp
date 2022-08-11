class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(3,0);
        
        for(int i = 0; i < n; i++){
            a[nums[i]]++;
        }
        
        vector<int> b(3,0);
        
        for(int i = 1; i < 3; i++){
            b[i] = b[i-1] + a[i-1];
        }
        
        for(int i = 0; i < n; i++){
            if(i < b[1]){
                nums[i] = 0;
            }else if(i < b[2]){
                nums[i] = 1;
            }else{
                nums[i] = 2;
            }
            
        }
        
    }
};