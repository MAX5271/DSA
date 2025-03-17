class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // since the order does not matter in frequency, we can sort the array
        sort(nums.begin(),nums.end());

        int start=0,end=0;
        long int sum=0;
        int freq=0;

        // applying 2 pointer approach and removing the starting elements when the sum is greater then required

        while(start<=end&&end<nums.size()){
            sum+=nums[end];
            // check if the sum + k is greater than the greatest number times the frequency of the number
            if(sum+k>=(long long)nums[end]*(end-start+1)){
                freq=max(freq,end-start+1);
                
            }
            else{
                while((long long)nums[end]*(end-start+1)>sum+k){
                    sum-=nums[start];
                    start++;
                }
            }
            end++;
        }
        return freq;
    }
};