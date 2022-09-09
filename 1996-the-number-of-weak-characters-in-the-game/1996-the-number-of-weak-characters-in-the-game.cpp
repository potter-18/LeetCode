class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& pr) {
        int n = pr.size();
        sort(pr.begin(), pr.end(), cmp);
        
        
        int maxDef = pr[n-1][1];
        int weakP = 0;
        for(int i = n-1; i >= 0; i--){
            if(pr[i][1] < maxDef){
                weakP++;
            }
            maxDef = max(maxDef,pr[i][1]);
        }
        
        return weakP;
    }
};