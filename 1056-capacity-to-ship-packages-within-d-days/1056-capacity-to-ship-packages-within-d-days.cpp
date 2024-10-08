class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int w=INT_MAX,start=*max_element(weights.begin(),weights.end()),end=accumulate(weights.begin(),weights.end(),0);
        while(start<=end){
            int mid = (start+end)/2;
            int d = 1,weight=0;
            for(int i=0;i<weights.size();i++){
                if(weight+weights[i]<=mid){
                    weight+=weights[i];
                }else{
                    d++;
                    weight=weights[i];
                }
            }
            if(d>days){
                start = mid + 1;
            }
            else{
                w = min(w,mid);
                end = mid - 1;
            }
        }
        return w;
    }
};