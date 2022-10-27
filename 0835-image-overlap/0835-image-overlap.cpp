class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2){
        int n = img1.size();
        vector<pair<int,int>> A,B;
        map<pair<int,int>,int> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(img1[i][j] == 1){
                    A.push_back({i,j});
                }
                if(img2[i][j] == 1){
                    B.push_back({i,j});
                }
            }
        }
        
        int ans = 0;
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < B.size(); j++){
                pair<int,int> x = {A[i].first-B[j].first,A[i].second-B[j].second};
                m[x]++;
                ans = max(ans,m[x]);
            }
        }
        return ans;
    }
};