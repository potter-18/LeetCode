class Solution {
private:
    int numberOfBits(int  &n){
        return (int)log2(n)+1;
    }
public:
    int concatenatedBinary(int n) {
        long ans = 1;
        int MOD = 1e9 + 7;
        
        for(int i = 2; i <= n; i++){
            int len = numberOfBits(i);
            ans = ((ans << len) % MOD + i)%MOD;
        }
        
        return ans;
    }
};