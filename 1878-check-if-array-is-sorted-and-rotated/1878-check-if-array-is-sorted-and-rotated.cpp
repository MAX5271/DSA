class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
       vector<int> a=nums;
       sort(a.begin(),a.end());
       for(int i=0;i<nums.size();i++)
       {count=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==a[(i+j)%nums.size()]) count++;
        }
        if(count==nums.size()) return true;
       }
       return false;
    }
};