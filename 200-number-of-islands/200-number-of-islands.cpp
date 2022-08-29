class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool> > vis(m,vector<bool>(n,0));
        
        queue<pair<int,int> > q;
        int island = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    q.push({i,j});
                    island++;
                    while(!q.empty()){
                        int k = q.front().first;
                        int l = q.front().second;
                        q.pop();
                        if(!vis[k][l]){
                            vis[k][l] = 1;
                            if(k < m && l+1 < n && grid[k][l+1] == '1' ){
                                q.push({k,l+1});
                            }
                            if(k+1 < m && l < n && grid[k+1][l] == '1'){
                                q.push({k+1,l});
                            }
                            if(k-1 < m && k-1 >= 0 && l < n && l >=0 && grid[k-1][l] == '1'){
                                q.push({k-1,l});
                            }
                            if(k < m && k >= 0 && l-1 < n && l-1 >=0 && grid[k][l-1] == '1'){
                                q.push({k,l-1});
                            }
                            
                        }
                    }   
                }
            }
        }
        
        return island;
    }
};