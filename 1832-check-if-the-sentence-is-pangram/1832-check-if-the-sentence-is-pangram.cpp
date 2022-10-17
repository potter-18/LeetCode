class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> cnt(26,0);
        
        for(int i = 0; i < sentence.size(); i++){
            cnt[sentence[i]-'a']++;
        }
        
        for(auto j : cnt){
            if(j == 0){
                return false;
            }
        }
        
        return true;
    }
};