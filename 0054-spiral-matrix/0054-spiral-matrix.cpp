class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix[0].size()-1,l=0,up=0,down=matrix.size()-1;
        vector<int> a;
        while(r>=l&&up<=down)
        {
            for(int i=l;i<=r;i++)
            {
                a.push_back(matrix[up][i]);
            }
            up++;
            if(r>=l&&up<=down)            
            for(int i=up;i<=down;i++)
            {
                a.push_back(matrix[i][r]);
            }
            r--;
            if(r>=l&&up<=down)
            for(int i=r;i>=l;i--)
            {
                a.push_back(matrix[down][i]);
            }
            down--;
            if(r>=l&&up<=down)
            for(int i=down;i>=up;i--)
            {
                a.push_back(matrix[i][l]);
            }
            l++;
        }
        return a;
    }
};