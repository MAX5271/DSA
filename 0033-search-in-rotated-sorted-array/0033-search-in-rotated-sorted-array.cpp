class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(),index=-1,k=0;

        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                k=i;
                // return k;
                break;
            }
        }

        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[(k+mid)%n]==target)
            {
                return (k+mid)%n;
            }
            else if(nums[(mid+k)%n]>target)
            {
                r=mid-1;

            }
            else l=mid+1;
        }
        return -1;
    }
};