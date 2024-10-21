class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> n(nums.size(),0);
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) n[count++]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=n[i];
        }
    }
};