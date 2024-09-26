class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long f = 0, l = 0, r = 0, sum = 0, count = 0;
       while(r<nums.size()) {
            sum+=nums[r];
           while(nums[r]*(r-l+1)>sum+k)
            {
                sum-=nums[l];
                l++;
            }
            count=max(count, r-l+1);

            r++;
        }
        return count;
    }
};