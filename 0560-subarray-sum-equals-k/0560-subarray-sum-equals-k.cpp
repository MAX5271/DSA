class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> a;
        int sum=0,c=0;
    a[0]++;
       for(int i=0;i<nums.size();i++)
       {
        sum+=nums[i];
        
        int rem=sum-k;
        c+=a[rem];
        a[sum]++;
       }
       return c;
    }
};