class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0, end = nums.size()-1;
        if(target == nums[0]) return 0;
        if(target == nums.back()) return nums.size()-1;
        while(start<end){
            int mid = (start+end)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end = mid;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};