class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int count = 0;
        
        for(auto it : data){
            if(count == 0){
                if((it >> 5) == 0b110) count = 1;
                else if((it >> 4) == 0b1110) count = 2;
                else if((it >> 3) == 0b11110) count = 3;
                else if(it >> 7) return false;
            } 
            else{
                if((it >> 6) == 0b10) count--;
                else return false;
            }
        }
        
        if(count == 0) return true;
        return false;
    }
};