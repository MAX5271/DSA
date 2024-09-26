class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        int start=0,end=nums.size()-2;

        while(end>=0&&nums[end]<nums[end-1])
        {
            end--;
        }
        return end;
    }
};