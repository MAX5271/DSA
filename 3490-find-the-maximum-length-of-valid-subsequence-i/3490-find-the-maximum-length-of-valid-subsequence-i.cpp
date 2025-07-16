class Solution {
public:
    int maximumLength(vector<int>& nums) {
        vector<int> o;
        int ce=0,co=0,ce1=0,co1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ce++;
            }else co++;
            if(ce1%2==nums[i]%2){
                ce1++;
            }
            if(co1%2!=nums[i]%2){
                co1++;
            }
        }
        int m=max(ce,max(co,max(co1,ce1)));
        return m;
    }
};