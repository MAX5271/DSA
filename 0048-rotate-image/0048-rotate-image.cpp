class Solution {
public:
    void swap(int *a, int *b)
    {
        int t = *a;
        *a=*b;
        *b=t;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix.size();j++)
            {
                swap(&matrix[i][j],&matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size()/2;j++)
            {
                swap(&matrix[i][j],&matrix[i][matrix.size()-1-j]);
            }
        }
    }
};