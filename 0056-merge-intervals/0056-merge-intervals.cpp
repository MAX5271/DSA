class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;
        vector<pair<int,int>> b;
        if(intervals.size()==1) return intervals;

        for(int i=0;i<intervals.size();i++)
        {
            b.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(b.begin(),b.end());
        int start=b[0].first,end=b[0].second;
        for(int i=1;i<b.size();i++)
        {
            while(i<b.size()&&(b[i].first<=end))
            {
                start=min(start,b[i].first);
                end=max(end,b[i].second);
                i++;
            }
            vector<int> temp={start,end};
            a.push_back(temp);
            start=0;
            end=0;
            if(i<b.size()) 
            {
                start=b[i].first;
                end=b[i].second;
            }
            if(i==b.size()-1)
            {
                vector<int> t={start,end};
                a.push_back(t);
            }
        }
        return a;
    }
}; 