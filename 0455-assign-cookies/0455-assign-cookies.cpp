class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0,n=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i=0;i<g.size();i++){
            while(n<s.size()&&s[n]<g[i]) n++;
            if(n==s.size()) break;
            n++;
            count++;
        }
        return count;
    }
};