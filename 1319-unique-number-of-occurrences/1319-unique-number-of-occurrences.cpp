class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> a;
        for(int i=0;i<arr.size();i++)
        {
            a[arr[i]]++;
        }
        vector<int> s;
        for(auto it:a)
        s.push_back(it.second);
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]) return false;
        }
        return true;
    }
};