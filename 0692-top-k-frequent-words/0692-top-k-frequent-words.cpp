class Solution {
public:
    static bool cmp(pair<string,int>& a, pair<string,int>& b){
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string,int> freq;
        vector<pair<string,int>> m;
        
        for(int i = 0; i < n; i++) freq[words[i]]++;
        
        for(auto it : freq) m.push_back({it.first,it.second});
        
        sort(m.begin(),m.end(),cmp);
        vector<string> res;
        for(auto it : m){
            if(k > 0) res.push_back(it.first);
            k--;
        } 
        
        return res;
    }
};