class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int m;
        if(target<=nums[0]) return 0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            m=mid;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            {
                r=mid-1;
                
            }
            else {
                l=mid+1;
                
            }
            m=mid;
        }
        if(nums[m]>target) return m;
        return m+1;
    }
};