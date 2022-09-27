class Solution {
public:
    string pushDominoes(string d) {
        int R = -1;
        int n = d.size();
        
        for(int i = 0; i < n; i++){
            if(d[i] == 'L'){
                if(R == -1){
                    for(int j = i-1; j >= 0 && d[j] == '.'; j--){
                        d[j] = 'L';
                    }
                }else{
                    for(int j = R+1, k = i-1; j < k; j++,k--){
                        d[j] = 'R';
                        d[k] = 'L';
                    }
                } 
                R = -1;
            }
            else if(d[i] == 'R'){
                if(R != -1){
                    for(int j = i-1; j > R; j--){
                        d[j] = 'R';
                    }
                }
                R = i;
            }
        }
        
        if(R != -1){
            for(int j = R+1; j < n; j++){
                d[j] = 'R';
            }
        }
        
        return d;
    }
};