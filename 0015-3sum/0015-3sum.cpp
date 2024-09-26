class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> c;
        // unordered_set<vector<int>> arr;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0&&nums[i]==nums[i-1]) continue;
            // b.clear();
            int r=nums.size()-1,l=i+1;
            while(l<r)
            {   
                if(nums[i]+nums[r]+nums[l]>0) r--;
                else if(nums[i]+nums[r]+nums[l]<0) l++;
                else
                {
                    vector<int> b;
                        b.push_back(nums[i]);
                        b.push_back(nums[l]);
                        b.push_back(nums[r]);
                        // sort(b.begin(),b.end());
                        // arr.insert(b);
                        c.push_back(b);
                        // b.clear();
                        
                    
                    l++;
                    // r--;
                    while(l<r&&nums[l]==nums[l-1]) l++;
                    while(l<r&&nums[r]==nums[r-1]) r--;
                }
                
            }

        }
        // for(int i=0;i<c.size();i++)
        // {
        //     sort(c[i].begin(),c[i].end());
        // }
        // // if(c.size()!=0)
        // // d.push_back(c[0]);
        // for(int i=0;i<c.size();i++)
        // {
        //     int count=0;
        //     for(int j=0;j<d.size();j++)
        //     {
        //         int counter=0;
        //         for(int k=0;k<3;k++)
        //         {
        //             if(c[i][k]==d[j][k]) counter++;
        //         }
        //         if(counter>=3) count++;
        //     }
        //     if(count==0) d.push_back(c[i]);
        // }
        
       return c;
    }
};