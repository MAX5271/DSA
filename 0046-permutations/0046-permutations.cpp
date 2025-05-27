class Solution {
public:
    vector<vector<int>> ans;
    void cal(vector<int> a,vector<int> b){
        if(a.size()==0){
            ans.push_back(b);
            return;
        }
        
        for(int i=0;i<a.size();i++){
            vector<int> temp;
            b.push_back(a[i]);
            for(int j=0;j<a.size();j++){
                if(i!=j) temp.push_back(a[j]);
            }
            cal(temp,b);
            b.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> a;
        cal(nums,a);
        return ans;
    }
};