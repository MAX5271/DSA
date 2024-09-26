class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> a(matrix.size(),0),b(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0) 
                {
                    a[i]++;
                    b[j]++;
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>0)
            for(int j=0;j<b.size();j++)
            {
                matrix[i][j]=0;
            }
        }
        for(int i=0;i<b.size();i++)
        {
            if(b[i]>0)
            for(int j=0;j<a.size();j++)
            {
                matrix[j][i]=0;
            }
        }
    }
};