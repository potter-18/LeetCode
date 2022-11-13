class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        
        for(int i = 0; i < s.size(); i++){
            string str = "";
            while(s[i] != ' ' && i < s.size()){
                str += s[i++];
            }
            if(!str.empty())
                st.push(str);
        }
        
        string rev = "";
        while(!st.empty()){
            rev += st.top();
            st.pop();
            if(!st.empty()){
                rev += " ";
            }
        }
        
        return rev;
    }
};