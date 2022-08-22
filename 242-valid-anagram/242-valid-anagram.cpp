class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        vector<int> freqS(26,0);
        vector<int> freqT(26,0);
        
        for(int i = 0; i < s.size(); i++){
            freqS[s[i]-'a']++;
            freqT[t[i]-'a']++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(freqS[s[i]-'a'] != freqT[s[i]-'a'])
                return false;     
        }
        
        return true;
    }
};