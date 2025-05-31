class Solution {
public:
    vector<vector<int>> ans;
    void cal(vector<int>& candidates, int target,int sum,int ind,vector<int>& temp){
        if(sum>target) return;
        if(sum==target){
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            ans.push_back(temp);
            return;
        }else if(ind<0) return;
        else{
           for(int i=ind;i>=0;i--){
            if(i<ind&&candidates[i]==candidates[i+1]) continue;
            temp.push_back(candidates[i]);
            cal(candidates,target,sum+candidates[i],i-1,temp);
            temp.pop_back();
           }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        cal(candidates,target,0,candidates.size()-1,temp);
        return ans;
    }
};