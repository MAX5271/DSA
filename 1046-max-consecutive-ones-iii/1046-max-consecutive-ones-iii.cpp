class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if (k == nums.size())
            return k;
        int start = 0, end = 0, count = 0;
        int size = k;
        while (end < nums.size()) {
            if (nums[end++] == 0)
                count++;
            while (count > k) {
                if (nums[start++] == 0)
                    count--;
            }
            size=max(size,end-start);
        }
        return size;
    }
};