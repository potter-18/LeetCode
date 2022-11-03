class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> map(26, vector<int>(26,0));
        
        int steps = 0;
        for(int i = 0; i < n; i++){
            if(map[words[i][1]-'a'][words[i][0]-'a']){
                steps += 4;
                map[words[i][1]-'a'][words[i][0]-'a']--;
            }
            else map[words[i][0]-'a'][words[i][1]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(map[i][i]){
                steps += 2;
                break;
            }
        }
        return steps;
    }
};