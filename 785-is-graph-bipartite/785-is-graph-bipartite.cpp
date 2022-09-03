class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<int> color(n,-1);
        
        
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                color[i] = 0;
                
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
            
                    for(auto it : graph[node]){
                        if(!vis[it]){
                            color[it] = abs(color[node]-1);
                            vis[it] = 1;
                            q.push(it);
                        }
                        else if(color[node] == color[it]){
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};