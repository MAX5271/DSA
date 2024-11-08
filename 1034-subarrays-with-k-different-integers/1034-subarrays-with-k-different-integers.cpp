class Solution {
public:
    int diff(vector<int>&nums,int k){
        if(k<0) return 0;
        unordered_map<int , int> count;
        int start=0,end=0,c=0;
        while(end<nums.size()){
            count[nums[end]]=end;
            while((int)count.size()>k){
                if(start==count[nums[start]])
                count.erase(nums[start]);
                start++;
            }
            c+=end-start+1;
            end++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return diff(nums,k)-diff(nums,k-1);
    }
};