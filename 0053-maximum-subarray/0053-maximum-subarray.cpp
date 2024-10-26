class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=*max_element(nums.begin(),nums.end()),s=0;
     if(sum<=0) return sum;
     for(int i = 0;i<nums.size();i++ ){

        s+=nums[i];
        if(s<0) {
            
            s=0;
        }
        sum=max(sum,s);
     }
     return sum;   
    }
};