class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n%2 != 0){
            return {};
        }
        vector<int> og;
        
        unordered_map<int,int> vis;
        for(auto j : changed){
            vis[j] = 0;
        }
        for(auto j : changed){
            vis[j]++;
        }
        
        sort(changed.begin(), changed.end());
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(vis[changed[i]] > 0){
                int key = 2*changed[i];
                vis[changed[i]]--;
                if(vis[key] > 0){
                    og.push_back(changed[i]);
                    vis[key]--;
                    cnt++;
                }
                else{
                    vis[changed[i]]++;
                }
            }
            
        }
        
        if(cnt == n/2){
            return og;
        }
        return {};
    }
};