class Solution {
public:
    bool checkVowel(char s){
        return (s == 'a' ||s == 'A' ||s == 'e' ||s == 'E' ||s == 'i' ||s == 'I' ||s == 'o' ||s == 'O' ||s == 'u' ||s == 'U');
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i < j){
            if(checkVowel(s[i]) && checkVowel(s[j])) swap(s[i++],s[j--]);
            else if(checkVowel(s[i])) j--;
            else if(checkVowel(s[j])) i++;
            else i++,j--;
        }
        
        return s;
    }
};