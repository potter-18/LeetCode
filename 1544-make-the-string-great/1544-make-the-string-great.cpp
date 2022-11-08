class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(!st.empty() && abs(st.top()-s[i]) == 32){
                st.pop();
            } 
            else st.push(s[i]);
            
        }
        string str;
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};