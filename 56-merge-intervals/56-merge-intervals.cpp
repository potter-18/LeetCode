class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > mergedIntervals;
        
        if(!intervals.size()){
            return mergedIntervals;
        }
        
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        
        for(auto it : intervals){
            if(tempInterval[1] >= it[0]){
                tempInterval[1] = max(tempInterval[1],it[1]);
            }
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};