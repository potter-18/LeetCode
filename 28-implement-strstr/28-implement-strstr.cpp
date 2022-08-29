class Solution {
public:
    int strStr(string haystack, string needle) {
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
                return i;
            }
            }
            
        }
        return -1;
        
    }
};