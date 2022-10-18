class Solution {
public:
    string say(string s, int len){
        if(len == 0){
            return s;
        }
        string str;
        int cnt = 1;
        for(int i = 0; i < s.size(); i++){
            if(i+1 < s.size() && s[i] == s[i+1]){
                cnt++;
                continue;
            }
            str += (to_string(cnt)+s[i]);
            cnt = 1;
        }
        return say(str,len-1);
    }
    string countAndSay(int n){
        return say("1",n-1);
    }
};