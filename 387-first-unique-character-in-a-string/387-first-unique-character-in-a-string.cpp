class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> count;
        
        for(auto i:s){
            count[i]++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(count[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};