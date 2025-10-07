class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans;
        sort(deck.begin(), deck.end(), greater<int>());
        queue<int> a;
        for (int i = 0; i < deck.size(); i++) {
            a.push(deck[i]);
            if(i==deck.size()-1) break;
            int x = a.front();
            a.pop();
            a.push(x);
        }
        while (!a.empty()) {
            ans.push_back(a.front());
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};