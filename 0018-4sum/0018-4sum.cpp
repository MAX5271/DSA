class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> a;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++)
            {
                if(j!=i+1&&nums[j]==nums[j-1]) continue;
                int r=nums.size()-1,l=j+1;
                while(l<r)
                {
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                    if(sum==target)
                    {
                        vector<int> b={nums[i],nums[j],nums[l],nums[r]};
                        a.push_back(b);
                        l++;
                        r--;
                        while(l<r&&nums[l]==nums[l-1]) l++;
                        while(l<r&&nums[r]==nums[r+1]) r--;
                    }
                    else if(sum<target) l++;
                    else r--;

                    

                }
            }
        }
        return a;
    }
};