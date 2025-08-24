class Solution {
public:
    
    int longestSubarray(vector<int>& nums) {
        vector<int> f,b;
        int count=0;
        for(int i=0;i<nums.size();i++){
            f.push_back(count);
            if(nums[i]==0) count=0;
            else count++;
        }
        count=0;
        for(int i=nums.size()-1;i>-1;i--){
            b.push_back(count);
            if(nums[i]==0) count=0;
            else count++;
        }
        reverse(b.begin(),b.end());
        int m=-1;
        for(int i=0;i<nums.size();i++){
            m=max(m,f[i]+b[i]);
        }
        return m;
    }
};