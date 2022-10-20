class Solution {
public:
    string intToRoman(int num) {
        string m[4][9] = {{"I","II","III","IV","V","VI","VII","VIII","IX"},{"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},{"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},{"M","MM","MMM"}};
        string ans;
        int ind[4];
        for(int i = 0; i < 4; i++){
            int curr = num%10;
            if(curr == 0) ind[i] = -1;
            else ind[i] = curr-1;
            num = num/10;
        }
        for(int i = 3; i >= 0; i--){
            if(ind[i] == -1) continue;
            ans += m[i][ind[i]];
        }
        return ans;
    }
};