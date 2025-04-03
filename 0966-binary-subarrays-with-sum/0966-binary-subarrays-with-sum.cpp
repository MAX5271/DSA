class Solution {
public:
    int c(vector<int>& nums,int goal){
    if(goal<0) return 0;
    int start=0,end=0,count=0;
        int sum=0;
        while(end<nums.size()){
            sum+=nums[end];
                
            
                while(sum>goal){
                    sum-=nums[start++];
                }
            count+=end-start+1;
            end++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (c(nums,goal)-c(nums,goal-1));
        
    }
};