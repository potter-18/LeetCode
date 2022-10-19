class Solution {
public:
    
    
    struct myComp {
    public:
        bool operator()(
        pair<int, string> const& b,
        pair<int, string> const& a)
        const noexcept
    {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
                
        
    }
};
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        unordered_map<string,int> freq;
        priority_queue<pair<int,string>, vector<pair<int,string>>, myComp> m;
        
        for(int i = 0; i < n; i++) freq[words[i]]++;
        
        for(auto it : freq) m.push({it.second,it.first});
        
        vector<string> res;
        for(int i = 0; i < k; i++){ 
            cout << m.top().first<< " " << m.top().second << "\n";
            res.push_back(m.top().second);
            m.pop();
        } 
        return res;
    }
};