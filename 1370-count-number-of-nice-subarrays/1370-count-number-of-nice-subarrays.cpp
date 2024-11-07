class Solution {
public:
    int codd(vector<int>& nums,int k){
        if(k<0) return 0;
        int start=0,end=0,count=0,c=0;
        while(end<nums.size()){
            if(nums[end]%2) c++;
            while(c>k){
                if(nums[start++]%2) c--;
            }
            count+=end-start+1;
            end++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (codd(nums,k)-codd(nums,k-1));
    }
};