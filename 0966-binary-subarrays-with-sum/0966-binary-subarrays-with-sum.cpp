class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       unordered_map<int,int> a;
       int count=0;
       int sum=0;
       a[0]++;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        int rem = sum - goal;
        count+=a[rem];
        a[sum]++;
       }
       return count;
    }
};