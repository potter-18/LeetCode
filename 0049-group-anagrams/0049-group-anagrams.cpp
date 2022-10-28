class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> str(strs.begin(),strs.end());
        unordered_map<string,vector<string>> m;
        
        for(int i = 0; i < str.size(); i++){
            sort(str[i].begin(),str[i].end());
            m[str[i]].push_back(strs[i]);
        }
        
        sort(str.begin(),str.end());
        vector<vector<string>> ans;
        for(auto it : m){
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};