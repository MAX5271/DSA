class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        for(int i=0;i<a.size()-2;i+=3){
            if(a[i+2]-a[i]<=k){
                vector<int> temp;
                temp.push_back(a[i]);
                temp.push_back(a[i+1]);
                temp.push_back(a[i+2]);
                ans.push_back(temp);
            }else{
                ans.clear();
                break;
            }
        }
        return ans;
    }
};