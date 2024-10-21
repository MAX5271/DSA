class Solution {
public:
    void swp(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void rotate(vector<int>& nums, int k) {
        if (k % nums.size() == 0 || nums.size() == 1)
            return;
        k = k % nums.size();
        // int num=nums[k];
        int n1, n2;
        n1 = nums[0];
        long long c1=0;
        for (int i = 0, count = 0; count < nums.size();
             count++, i = (i + k) % nums.size(), c1 += k) {
            if (c1 % nums.size() == 0 && k != 1 && c1) {
                i++;
                n1 = nums[i];
            }
            n2 = nums[(i + k) % nums.size()];
            nums[(i + k) % nums.size()] = n1;
            n1 = n2;
        }
    }
};