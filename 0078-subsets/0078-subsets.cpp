class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<(int)pow(2,nums.size());i++){
            vector<int> temp;
            bitset <32> n(i);
            for(int j=0;j<nums.size();j++){
                if(n[j]==1) temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};