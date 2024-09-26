class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,m=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]>=0)
            {
                
                sum+=nums[i];
            }
            else
            {
                sum=0;
                
            }
            m=max(sum,m);

        }
        if(m==0) return *(max_element(nums.begin(),nums.end()));
        return m;
    }
};