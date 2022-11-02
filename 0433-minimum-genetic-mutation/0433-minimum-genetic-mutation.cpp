class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        queue<string> q;
        unordered_set<string> s;
        for(auto x : bank){
            s.insert(x);
        }
        q.push(start);
        int path = 0;
        while(!q.empty()){
            int len = q.size();
            while(len--){
                string curr = q.front();
                q.pop();

                if(curr == end) return path;
                s.erase(curr);

                for(int i = 0; i < 8; i++){
                    string t = curr;

                    t[i] = 'A';
                    if(s.count(t)) q.push(t);

                    t[i] = 'C';
                    if(s.count(t)) q.push(t);

                    t[i] = 'G';
                    if(s.count(t)) q.push(t);

                    t[i] = 'T';
                    if(s.count(t)) q.push(t);
                }
            }
            path++;
        }
        
        return -1;
        
    }
};