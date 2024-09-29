class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr.back()==arr.size()) return arr.back()+k;
        int start = 0, end = arr.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            int diff = arr[mid] - (mid  + 1);
            if(diff<k){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return end + k + 1;
    }
};