class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=0,end=INT_MAX,ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            int count=0,s1=0;
            for(int i=0;i<nums.size();i++){
                s1+=nums[i];
                if(s1>mid){
                    count++;
                    s1=nums[i];
                }
            }
            if(count>=k){
                start=mid+1;
            }else end=mid-1;
        }
        return max(start,*max_element(nums.begin(),nums.end()));
    }
};