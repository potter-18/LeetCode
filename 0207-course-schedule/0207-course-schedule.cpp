class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses);
        
        for(int i = 0; i < n; i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        vector<int> ind(numCourses);
        
        for(int i = 0; i < numCourses; i++){
            for(auto it : adj[i]){
                ind[it]++;
            }
        }
        
        queue<int> q;
        
        for(int i = 0; i < numCourses; i++){
            if(ind[i] == 0){
                q.push(i);
            }
        }
        
        int count = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            
            for(auto it : adj[node]){
                ind[it]--;
                if(ind[it] == 0){
                    q.push(it);
                }
            }
        }
        
        if(count == numCourses) return true;
        return false;
    }
};