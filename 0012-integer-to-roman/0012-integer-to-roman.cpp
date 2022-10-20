class Solution {
public:
    string intToRoman(int num) {
        int temp = num;
        vector<vector<string>> m(4);
        m[0] = {"I","II","III","IV","V","VI","VII","VIII","IX"};
        m[1] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        m[2] = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        m[3] = {"M","MM","MMM"};
        string ans;
        vector<int> ind;
        for(int i = 0; i < 4, temp > 0; i++){
            int curr = temp%10;
            if(curr == 0){
                ind.push_back(-1);
            }else{
                ind.push_back(curr-1);
            }
            
            temp = temp/10;
        }
        for(int i = ind.size()-1; i >= 0; i--){
            if(ind[i] == -1){
                continue;
            }
            ans += m[i][ind[i]];
        }
        return ans;
    }
};