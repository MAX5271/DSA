class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,m=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) count++;
            else
            {
                m=max(count,m);
                count=0;
            }

        }
        return max(m,count);
    }
};