class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if(is_sorted(nums.begin(),nums.end())) return true;
        vector<int> cpy,bi;
        for(int i=0;i<nums.size();i++) cpy.push_back(nums[i]);
        sort(cpy.begin(),cpy.end());
        unordered_map<int,int> ref;
        for(int i=0;i<nums.size();i++) ref[cpy[i]]=i;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int count=0;
            while(n){
                if(n%2) count++;
                n/=2;
            }
            bi.push_back(count);
        }
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(ref[nums[i]]>=i)
            for(int j=i;j<ref[nums[i]];j++){
                if(bi[j]!=bi[j+1]) return false;
            }else{
                for(int j=i;j>ref[nums[i]];j--){
                    if(bi[j]!=bi[j-1]) 
                    return false;
                }
            }
        }
        return true;
    }
};