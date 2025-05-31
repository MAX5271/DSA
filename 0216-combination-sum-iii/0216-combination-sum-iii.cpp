class Solution {
public:

    vector<vector<int>> ans;

    void cal(int k,int n,vector<int>& temp,int num){
        if(n<0) return;
        if(n==0&&k==0){
            if(find(ans.begin(),ans.end(),temp)==ans.end())
                ans.push_back(temp);
                return;
        }
        if(k<=0) return;
        if(num>9) return;
        temp.push_back(num);
        cal(k-1,n-num,temp,num+1);
        temp.pop_back();
        cal(k,n,temp,num+1);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        cal(k,n,temp,1);
        return ans;
    }
};