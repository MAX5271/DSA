class Solution {
public:
    int minDays(vector<int>& a, int m, int k) {
        if((long long )m*k>a.size()) return -1;
        int start = *min_element(a.begin(),a.end()), end = *max_element(a.begin(),a.end());
        int days = INT_MAX;
        while(start<=end){
            int bouquets=0,count=0;
            int mid = start + (end-start)/2;
            for(int i=0;i<a.size();i++){
                if(mid>=a[i]){
                    count++;
                }else{
                    count=0;
                }
                if(count==k){
                    bouquets++;
                    count=0;
                }
            }
                if(bouquets<m){
                    start = mid + 1;
                }
                else if(bouquets>=m){
                    end = mid - 1;
                    days = min(days,mid);
                }
               
        }
        return days;
    }
};