class Solution {
public:
    vector<int> par;
    
    int find(int i){
        if(i != par[i])
            par[i] = find(par[i]);
        return par[i];
    }
    
    void union_set(int i, int j){
        int i_id = find(i);
        int j_id = find(j);
        par[i_id] = par[j_id];
    }
    
    
    
    bool equationsPossible(vector<string>& equations) {
        for(int i = 0; i < 26; i++){
            par.push_back(i);
        }
        for(int i = 0; i < equations.size(); i++){
            if(equations[i][1] == '='){
                union_set(equations[i][0]-97,equations[i][3]-97);
            }
        }
        for(int i = 0; i < 26; i++){
            find(i);
        }
        for(int i = 0; i < equations.size(); i++){
            if(equations[i][1] == '!' && par[equations[i][0]-97] == par[equations[i][3]-97]){
                return false;
            }
        }
        
        return true;
    }
};