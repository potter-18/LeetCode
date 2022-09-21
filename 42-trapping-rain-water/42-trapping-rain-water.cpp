class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int storage = 0;
        vector<int> lMax(n,0);
        vector<int> rMax(n,0);
        int leftMax = h[0];
        for(int i = 0; i < n; i++){
            if(leftMax < h[i]){
                leftMax = h[i];
            }
            if(lMax[i] < leftMax){
                lMax[i] = leftMax;
            }
        }
        int rightMax = h[n-1];
        for(int i = n-1; i >= 0; i--){
            if(rightMax < h[i]){
                rightMax = h[i];
            }
            if(rMax[i] < rightMax){
                rMax[i] = rightMax;
            }
        }
        
        for(int i = 0; i < n; i++){
            storage +=  ( min(lMax[i],rMax[i]) - h[i] );
        }
        
        return storage;
    }
};