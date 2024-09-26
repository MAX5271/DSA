class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int l=0,r=nums.size()-1;
     if(nums.size()==1) return nums[0];
     
     while(l<=r)
     {
        int mid=l+(r-l)/2;
        if(((r-l+1)/2)%2==0)
        {
        if(nums[mid]!=nums[mid+1])
        {
            
            if(mid!=0&&nums[mid]!=nums[mid-1]) return nums[mid];
            r=mid-2;
        }
        else{
            l=mid+2;
        }
        }
        // if(r!=0&&r!=nums.size()-1)
        // if(nums[r]!=nums[r-1]&&nums[r]!=nums[r+1]) return nums[r];
    
        else
        if(nums[mid]!=nums[mid-1])
        {
            
            if(mid!=0&&nums[mid]!=nums[mid+1]) return nums[mid];
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        // if(r!=0&&r!=nums.size()-1)
        // if(nums[r]!=nums[r-1]&&nums[r]!=nums[r+1]) return nums[r];
     }  
     
     return nums[0];  
    }
};