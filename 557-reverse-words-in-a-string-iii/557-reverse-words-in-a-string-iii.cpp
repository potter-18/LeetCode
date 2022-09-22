class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == ' ' || i == s.size()){
                int r = i;
                int len = (i-l+1);
                for(int j = 0; j < len/2; j++){
                    swap(s[l++],s[r-1]);
                    r--;
                }
                l = i+1;
            }
                
        }
        
        return s;
    }
};