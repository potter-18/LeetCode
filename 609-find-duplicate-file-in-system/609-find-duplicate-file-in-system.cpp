class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        int n = paths.size();
        unordered_map<string,vector<string> > Files;
        vector<vector<string> > ans;
        string dir,file,content;
       
        
        for(auto& it : paths){
            int i = 0,j;
            while(it[i] != ' '){
                i++;
            }
            dir = it.substr(0,i);
            while(i < it.size()){
                j = i;
                
                while(it[i++] != '(')
                    
                file = it.substr(j+1,i-j-1);
                j = i;
                while(it[i++] != ')')
                content = it.substr(j,i-j);
                Files[content].emplace_back(dir + '/' + file);
            } 
        }
        
        
        for(auto& it : Files){
            if(it.second.size()  > 1)
                ans.push_back(it.second);
        }
        
        return ans;
    }
};