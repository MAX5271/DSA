class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void cal(int i, vector<int>& a) {
        if (i >= a.size()) {
            return;
        }

        temp.push_back(a[i]);
        ans.push_back(temp);
        cal(i + 1, a);
        temp.pop_back();
        cal(i + 1, a);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> er;
        ans.push_back(er);
        cal(0,nums);
        return ans;
    }
};