class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if(k==nums.size()) return *max_element(nums.begin(),nums.end());
        int s = accumulate(nums.begin(),nums.end(),0);
        if(k==1) return s;
        int start = 0, end =s;

        while(start<=end){
            int sum = 0;
            int cuts = 0;
            int mid = start + (end - start)/2;
            // cout<<mid<<endl;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                if(sum>mid){
                    sum = nums[i];
                    cuts++;
                }
            }
            if(cuts>=k){
                start = mid + 1;
            }
            else end = mid - 1;
        }
        return max(start,*max_element(nums.begin(),nums.end()));
    }
};