class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>t;
    
    sort(
        intervals.begin(),intervals.end()
    );
        for(auto i:intervals)
        {
            if(t.empty()||t.back()[1] <i[0])
            {
                t.push_back(i);
            }
            else
            {
                t.back()[1] = max(t.back()[1],i[1]);
            }
           cout<< t.back()[1]<<" ";
        }
        return t;
    }
};