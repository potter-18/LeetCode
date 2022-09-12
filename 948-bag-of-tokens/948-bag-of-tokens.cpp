class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int score = 0, ans = 0;
        sort(tokens.begin(), tokens.end());
        
        int i = 0, j = n-1;
        
        while(i <= j){
            if(power >= tokens[i]){
                power -= tokens[i];
                score++;
                i++;
            }else if(score >= 1){
                power += tokens[j];
                score--;
                j--;
            }else{
                break;
            }
            
            ans = max(score,ans);
        }
        
        return ans;
    }
};