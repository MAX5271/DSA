class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c0=0;
        //get the position of first 0
        while(c0<nums.size()&&nums[c0]!=0){c0++;}
        //return if no zero is present
        if(c0==nums.size()) return;
        
        for(int i=0;i<nums.size();i++){
            //check for non zero element
            if(nums[i]!=0){
                //get the location of zero to swap with
                while(c0<nums.size()&&nums[c0]!=0){c0++;}
                //swap only if 0 occurs before the non-zero element at i
                if(c0<i) {
                    int temp=nums[i];
                    nums[i]=0;
                    nums[c0]=temp;
                }

            }
        }
    }
};