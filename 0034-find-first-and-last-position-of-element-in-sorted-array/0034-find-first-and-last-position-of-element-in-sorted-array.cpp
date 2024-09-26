class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i1=-1,i2=-1;
        int l=0,r=nums.size()-1;

        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                i1=mid;
                i2=mid;
                r=mid-1;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;

            }
            else l=mid+1;
        }
        if(i1==-1) 
        {
            vector<int > a={-1,-1};
            return a;
        }
        l=i1;

        r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
            {
                i2=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
            {
                r=mid-1;
            }
            else l=mid+1;
        }

        vector<int> a={i1,i2};
        return a;

    }
};