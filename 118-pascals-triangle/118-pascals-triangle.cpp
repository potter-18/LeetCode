class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int> > pt(n);
        
        for(int i = 0; i < n; i++){
            pt[i].resize(i+1);
            pt[i][0] = pt[i][i] = 1;
            for(int j = 1; j < i; j++){
                pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
            }
        }
        return pt;
    }
};