class Solution {
public:
    vector<vector<int>> ans;

    void cal(vector<int>& nums,int index,vector<int>& temp){
        if(find(ans.begin(),ans.end(),temp)==ans.end()){
            ans.push_back(temp);
        }
        if(index>=nums.size()) return;
        temp.push_back(nums[index]);
        cal(nums,index+1,temp);
        temp.pop_back();
        cal(nums,index+1,temp);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(),nums.end());
        cal(nums,0,temp);
        return ans;
    }
};