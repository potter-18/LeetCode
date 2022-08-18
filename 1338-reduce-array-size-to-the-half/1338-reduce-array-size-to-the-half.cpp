#define N 100001
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
        return (a.second > b.second);
}

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        unordered_set<int> s;
        
        for(auto it : arr){
            m[it]++;
            s.insert(it);
        }
        
        vector<pair<int,int> > p;
        
        for(auto it : m){
            p.push_back({it.first,it.second});
        }
        
        sort(p.begin(),p.end(),sortbysec);
        // for(auto it : p){
        //     cout << it.first << ":" << it.second << "\n";
        // }
        
        int sum = 0;
        vector<int> ans;
        for(auto it : p){
            sum += it.second;
            ans.push_back(it.first);
            if(sum >= n/2){
                break;
            }
        }
        return ans.size();
    }
};