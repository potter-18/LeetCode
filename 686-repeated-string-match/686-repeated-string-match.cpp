class Solution {
public:
    bool strStr(string haystack, string needle) {
        int i,j=0,flag=0;
        
        for(i=0;i<haystack.length();++i)
        {
            if(haystack[i] == needle[0])
            {
                flag = 0;
                int cc = i;
                
                for(j=0;j<needle.length();++j)
                {
                    if(haystack[cc]==needle[j])
                    {
                        cc+=1;
                     }
                    else
                    {
                        flag = 1;
                    }
                }
            if(flag==0)
            {
                return 1;
            }
            }
            
        }
        return 0;
    }
    
    int repeatedStringMatch(string a, string b) {
        
        int count = 1;
        string vain = a;
        
        while(a.size() < b.size()){
            count++;
            a += vain;
        }
        
        for(int i = 0; i <= 1; i++){
            if(strStr(a,b)){
                return count;
            }
            else{
                count++;
                a += vain;
            }
        }
        
        return -1;
       
    }
};