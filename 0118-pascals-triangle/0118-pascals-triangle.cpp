class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        vector<int> b;
       
            b.push_back(1);
            a.push_back(b);
        if(numRows==1) return a;
        for(int i=1;i<numRows;i++)
        {
            vector<int> c;
            c.push_back(1);
            for(int j=1;j<i;j++)
            {
                c.push_back(a[i-1][j]+a[i-1][j-1]);
            }
            c.push_back(1);
            a.push_back(c);
        }
        return a;
    }
};