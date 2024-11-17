class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end=0;
        for(int i=0;i<nums.size();i++){
            if(i+nums[i]>end) end=nums[i]+i;
            if(nums[i]==0&&end<=i) break;
        }
        return end>=nums.size()-1;
    }
};