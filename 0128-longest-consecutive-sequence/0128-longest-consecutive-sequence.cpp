class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> a;
        for(int i=0;i<nums.size();i++)
        {
            a.insert(nums[i]);
        }
        int size=1;

        for(auto it:a)
        {
            if(a.find(it-1)==a.end())
            {
                int c=1;
                int x=it;
                while(a.find(x+1)!=a.end())
                {
                    c++;
                    
                    x++;
                }
                size=max(size,c);
            }
        }
        return size;
    }
};
