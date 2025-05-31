class Solution {
public:
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<pow(2,nums.size());i++){
            bitset<10> a=i;
            vector<int> temp;
            for(int j=0;j<nums.size();j++){
                if(a[j]==1) temp.push_back(nums[j]);
            }
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            ans.push_back(temp);
        }
        return ans;
    }
};