class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<bitset<32>> a(candidates.size());
        for(int i=0;i<candidates.size();i++){
            a[i]=candidates[i];
        }
        vector<int> s;
        for(int j=0;j<32;j++){
            int count=0;
        for(int i=0;i<candidates.size();i++)
        {
            if(a[i][j]==1) count++;
        }
        s.push_back(count);
        }
        return *max_element(s.begin(),s.end());
    }
};