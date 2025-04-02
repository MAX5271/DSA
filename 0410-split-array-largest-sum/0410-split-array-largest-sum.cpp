class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start=0,end=INT_MAX,ans=-1;
        while(start<end){
            int mid=(start+end)/2;
            int count=0,sum=0,s1=0;
            for(int i=0;i<nums.size();i++){
                s1+=nums[i];
                if(s1>=mid){
                    sum=max(sum,s1);
                    count++;
                    s1=0;
                }
            }
            if(count>=k){
                ans=max(ans,sum);
                start=mid+1;
            }else end=mid-1;
        }
        return ans;
    }
};