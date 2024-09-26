class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a(nums.size(),0);
        int c1=0,c2=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) {a[c2]=nums[i];c2+=2;}
            else 
            {
                a[c1]=nums[i];
                c1+=2;
            }
        }
        return a;
    }
};