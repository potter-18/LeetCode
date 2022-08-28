class Solution {
public:
    
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> temp;
        
        for(int i = 0; i < m; i++){
            temp.resize(min(m-i,n));
            for(int j = 0,k = i; j < min(m-i,n); j++,k++){
                temp[j] = mat[k][j];
            }
            sort(temp.begin(),temp.end());
            for(int j = 0,k = i; j < min(m-i,n); j++,k++){
                mat[k][j] = temp[j];
            }
        }
        
        for(int i = 1; i < n; i++){
            temp.resize(min(m,n-i));
            for(int j = 0,k = i; j < min(m,n-i); j++,k++){
                temp[j] = mat[j][k];
            }
            sort(temp.begin(),temp.end());
            for(int j = 0,k = i; j < min(m,n-i); j++,k++){
                mat[j][k] = temp[j];
            }
        }
        
        return mat;
    }
};