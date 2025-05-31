class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> dp;
    void cal(vector<int>& candidates, int target,int sum,int ind,vector<int>& temp){
        if(sum>target) return;
        if(sum==target){
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            ans.push_back(temp);
            return;
        }else if(ind<0) return;
        else{
            temp.push_back(candidates[ind]);
            if(find(dp.begin(),dp.end(),temp)==dp.end()){
                dp.push_back(temp);
                cal(candidates,target,sum+candidates[ind],ind-1,temp);
                
            }
            temp.pop_back();
            cal(candidates,target,sum,ind-1,temp);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        cal(candidates,target,0,candidates.size()-1,temp);
        return ans;
    }
};