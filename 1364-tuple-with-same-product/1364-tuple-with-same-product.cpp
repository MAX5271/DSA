class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        // int count=0;
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
            {
                count[nums[i]*nums[j]]++;
            }
        }
        int ans=0;
        for(auto it=count.begin();it!=count.end();it++){
            int n=it->second-1;
            ans+=(n*(n+1))/2;
        }
        return (ans*8);
    }
};