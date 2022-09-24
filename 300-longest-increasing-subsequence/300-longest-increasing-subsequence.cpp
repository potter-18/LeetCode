class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = INT_MIN;
        vector<int> len(nums.size(),0);
        
        for(int i = 0; i < nums.size(); i++){
            // cout << "nums[" << i << "]: "<< nums[i] << "\n";
            for(int j = 0; j <= i; j++){
                if(nums[j] < nums[i]){
                    len[i] = max(len[i],len[j]+1);
                    // cout << "len[" << i << "]: "<< len[i] << " "; 
                }else{
                    len[i] = max(len[i],1);
                    // cout << "len[" << i << "]: "<< len[i] << " ";
                }
            }
            // cout << "\n";
        }
        // for(auto it : len){
        //     cout << it << "\n";
        // }
        return *max_element(len.begin(),len.end());
    }
};