class Solution {
public:
    vector<int> NSE(vector<int>& heights) {
        vector<int> ans(heights.size(), -1);
        stack<int> nse;
        nse.push(-1);
        for (int i = heights.size() - 1; i > -1; i--) {
            while (nse.top() != -1 && heights[i] <= heights[nse.top()]) {
                nse.pop();
            }
            ans[i] = nse.top();
            nse.push(i);
        }
        return ans;
    }

    vector<int> PSE(vector<int>& heights) {
        vector<int> ans(heights.size(), -1);
        stack<int> pse;
        pse.push(-1);
        for (int i = 0; i < heights.size(); i++) {
            while (pse.top() != -1 && heights[i] <= heights[pse.top()]) {
                pse.pop();
            }
            ans[i] = pse.top();
            pse.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> nse = NSE(heights), pse = PSE(heights);
        int ans = -1;
        int n = heights.size();

        for (int i = 0; i < n; i++) {
            if (nse[i] == -1)
                nse[i] = n;
            ans = max(ans, (heights[i] * (nse[i] - pse[i] - 1)));
        }
        return ans;
    }
};