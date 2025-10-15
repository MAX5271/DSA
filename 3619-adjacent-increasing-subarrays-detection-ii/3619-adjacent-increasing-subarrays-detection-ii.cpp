class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int ans = -1,prev=1,curr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) curr++;
            else{
                prev=curr;
                curr=1;
            }
            ans=max(ans,min(curr,prev));
            ans=max(ans,curr/2);
        }
        return ans;
    }
};