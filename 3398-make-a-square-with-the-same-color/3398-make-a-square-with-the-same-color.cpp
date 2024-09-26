class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(grid[i][j]==grid[i][j+1])
                {
                    if(i==0)
                    {
                        if(grid[i+1][j]==grid[i][j]||grid[i+1][j+1]==grid[i][j+1])
                            return true;
                    }
                    else if(i==1)
                    {
                     if(grid[i+1][j]==grid[i][j]||grid[i+1][j+1]==grid[i][j+1])
                            return true;   
                        if(grid[i-1][j]==grid[i][j]||grid[i-1][j+1]==grid[i][j+1])
                            return true;   
                    }
                    else{
                         if(grid[i-1][j]==grid[i][j]||grid[i-1][j+1]==grid[i][j+1])
                            return true;   
                    }
                }
            }
        }
        return false;
    }
};