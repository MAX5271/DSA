class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int > a;
        a.push_back(nums[0]);
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i-1])
            a.push_back(nums[i]);
        }
        if(nums.back()!=a.back())
        a.push_back(nums.back());
        for(int i=0;i<a.size();i++)
        {
            nums[i]=a[i];
        }
        return a.size();
        
    }
};