class Solution {
public:
    int oddEvenJumps(vector<int>& arr) {
        int n = arr.size();
        
        vector<bool> high(n,0);
        vector<bool> low(n,0);
        
        high[n-1] = 1;
        low[n-1] = 1;
        map<int,int> m;
        m[arr[n-1]] = n-1;
        int res = 1;
        for(int i = n-2; i >= 0; i--){
            auto hi = m.lower_bound(arr[i]);
            auto lo = m.upper_bound(arr[i]);
            
            // cout << hi->first <<" "<<  hi->second << " "<< m.end()->first <<  "\n";
            // cout << lo->first <<" "<<  lo->second << " "<< m.begin()->first <<  "\n";
            
            if(hi != m.end()) high[i] = low[hi->second];
            
            if(lo != m.begin()) low[i] = high[(--lo)->second];
            
            if(high[i]){
                // cout << i << "\n";
                res++;
            }
            m[arr[i]] = i;
        }
        
        return res;
    }
};