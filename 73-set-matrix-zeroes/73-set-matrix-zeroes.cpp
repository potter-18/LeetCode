class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row;
        vector<int> column;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    row.push_back(i);
                    column.push_back(j);
                }
            }
        }
        
        for(int j = 0; j < row.size(); j++){
            int a = row[j];
            for(int i = 0; i < n; i++){
                mat[a][i] = 0;
            }
        }
        
        for(int j = 0; j < column.size(); j++){
            int a = column[j];
            for(int i = 0; i < m; i++){
                mat[i][a] = 0;
            }
        }
    }
};