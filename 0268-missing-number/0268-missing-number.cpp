class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=(nums.size()*(nums.size()+1))/2;
        sum=accumulate(nums.begin(),nums.end(),0);
        return (n-sum);
    }
};