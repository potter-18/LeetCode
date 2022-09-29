class Solution {
public:
    
    static bool cmp(const pair<int,int>& a, const pair<int,int>& b){
        if(a.second == b.second)
            return a.first < b.first;
        return a.second < b.second; 
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<pair<int,int>> temp;
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            temp.push_back({arr[i],abs(arr[i]-x)});
        }
        
        sort(temp.begin(), temp.end(), cmp);
        
        for(int i = 0; i < k; i++){
            ans.push_back(temp[i].first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};