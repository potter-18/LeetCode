class Solution {
private:
    set<vector<int> > ans;
    
    void targetCheck(int i, int currSum, vector<int>& cand, int n, int t, vector<int> subset){
        if(currSum > t){
            return;
        }
        
        if(currSum == t){
            ans.insert(subset);
            return;
        } 
        
        for(int j = i; j < n; j++){
            subset.push_back(cand[j]);
            currSum += cand[j];
            targetCheck(j,currSum,cand,n,t,subset);
            subset.pop_back();
            currSum -= cand[j];
        }
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& cand, int t) {
        int n = cand.size();
        vector<int> subset;
        vector<vector<int>> allSubset;
        sort(cand.begin(),cand.end());
        
        targetCheck(0,0,cand,n,t,subset);
        
        for(auto it : ans){
            allSubset.push_back(it);
        }
        
        return allSubset;
    }
};