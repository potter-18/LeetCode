class Solution {
private:
    void rec(int t, int n, int k, int value,vector<int> &ans){
        for(int i = 0; i <= 9; i++){
            if(n >= 0){
                if(abs(t-i) == k){
                    rec(i,n-1,k,value+i*pow(10,n),ans);
                } 
            }
            else{
                ans.push_back(value);
                return;
            }
        }
    }
    
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int i = 1; i <= 9; i++){
            rec(i,n-2,k,i*pow(10,n-1),ans);
        }
        return ans;
    }
};