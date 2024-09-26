class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> a;
        if(n==0) return;
        for(int i=0;i<n;i++)
        nums1.pop_back();
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        int c1=0,c2=0;
        while(true)
        {
            if(nums1[c1]<nums2[c2])
            {
                a.push_back(nums1[c1++]);
            }
            else if(nums1[c1]>nums2[c2])
            {
                a.push_back(nums2[c2++]);
            }
            else
            {
                a.push_back(nums1[c1++]);
                a.push_back(nums2[c2++]);
            }
            if(a.back()==INT_MAX) {
                a.pop_back();
                break;}

        }
        if(a.back()==INT_MAX) {
                a.pop_back();
                }
        nums1.clear();
        for(int i=0;i<a.size();i++)
        {
            nums1.push_back(a[i]);
        }
    }
};