class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if(threshold==nums.size()) return *max_element(nums.begin(),nums.end());
        int start = 1,end = 1e6;
        int num = INT_MAX;
        while(start<=end){
            int mid = (start+end)/2;
            int sum = 0;
            for(auto i:nums) sum+=ceil((double)i/mid);

            if(sum>threshold){
                start = mid + 1;
            }
            else{
                end = mid - 1;
                num = min(num,mid);
            }
        }
        return num;
    }
};