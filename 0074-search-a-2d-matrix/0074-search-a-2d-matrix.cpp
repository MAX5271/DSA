class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s1 = 0, s2 = 0, e1 = matrix.size() - 1, e2 = matrix[0].size() - 1;
        while (s1 <= e1){
            int m1 = (s1+e1)/2;
            if(matrix[m1][0]>target){
                e1=m1-1;
            }
            else if(matrix[m1][0]==target){
                return true;
            }
            else{
                s2=0;
                e2=matrix[0].size()-1;
                while(s2<=e2){
                    int m2=(s2+e2)/2;
                    if(matrix[m1][m2]>target){
                        e2=m2-1;
                    }
                    else if(matrix[m1][m2]==target){
                        return true;
                    }
                    else s2=m2+1;
                }
                s1=m1+1;
            }
        }
        return false;
    }
};