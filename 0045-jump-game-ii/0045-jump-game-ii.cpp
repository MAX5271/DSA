class Solution {
public:
    int jump(vector<int>& nums) {

        int pos=0;
        int count=0;
        while(pos<nums.size()-1){
            int index=pos+nums[pos];
            int num=-1;
            if(index<nums.size()-1)
            for(int i=index;i>pos;i--){
                if(i+nums[i]>num){
                    num=i+nums[i];
                    index=i;
                }
            }
            pos=index;
            count++;
        }
        return count;
    }
};