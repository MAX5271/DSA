class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int > a;
        int c=1;
       int i1=0,i2=1;
        if(nums.size()==1)
        {
            a.push_back(nums[0]);
                return a;
        }
        else if(k==1) return nums;
        if(nums.size()==2&k==2) {
            if(nums[1]>nums[0])
            a.push_back(nums[1]);
            return a;
        }
        while(i2!=nums.size())
        {
            if(nums[i2]-nums[i2-1]!=1)
            {
                i1=i2;
            }
            if(i2+1>=k)
            {
            if(i2-i1+1>=k) a.push_back(nums[i2]);
                else a.push_back(-1);
                }
            i2++;
        }
        return a;
    }
};