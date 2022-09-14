class Solution {
private:
    vector<string> subset;
    vector<vector<string>> ans;
    bool check(string s, int i, int j){
        while(i < j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }
public:
    void partition(int ind, string s){
        if(s.size() == ind){
            ans.push_back(subset);
            return;
        }
        for(int i = ind; i < s.size(); i++){
            if(check(s,ind,i)){
                subset.push_back(s.substr(ind,i-ind+1));
                partition(i+1,s);
                subset.pop_back();
            }
        }
        return;
    }
    
    vector<vector<string>> partition(string s) {
        
        partition(0,s);
        
        return ans;
    }
};