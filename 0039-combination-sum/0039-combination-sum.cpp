class Solution {
public:
    vector<vector<int>> ans;
    void cal(vector<int>& candidates,int target,vector<int>& temp,int sum,int index){
        if(sum>target) return;
        else if(sum==target){
            ans.push_back(temp);
        }
        // else if(index>=candidates.size()) return;
        else{
            for(int i=index;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            cal(candidates,target,temp,sum+candidates[i],i);
            temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int sum=0;
        cal(candidates,target,temp,sum,0);
        return ans;
    }
};