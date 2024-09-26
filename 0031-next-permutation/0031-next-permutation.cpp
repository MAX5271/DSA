class Solution {
public:
    void swap( int *a, int *b)
    {
         int temp = *a;
        *a = *b;
        *b = temp;
    }
    void nextPermutation(vector<int>& nums) {
        int index=-1,i1=INT_MAX;
        if(nums.size()==1) return;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]<m)
        //     {
        //         m=nums[i];
        //         i1=i;
        //     }
        // }
        for(int i=nums.size()-1;i>-1;i--)
        {
            for(int j=i-1;j>-1;j--)
            {
                if(nums[j]<nums[i])
                {
                    if(index<j)
                    index=j;
                    break;
                }
            }
            
            if(index>=i-2) break;
            // swap(&nums[index],&nums[i]);
        }
        if(index!=-1)
        for(int i=nums.size()-1;i>-1;i--)
        {
            if(nums[i]>nums[index])
            {
                i1=i;
                break;
            }
        }
        if(index==-1) {sort(nums.begin(),nums.end()); return;}
            swap(&nums[index],&nums[i1]);
            sort(nums.begin()+index+1,nums.end());
    }
};