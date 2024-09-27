class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=INT_MAX;
        
        long long int start =1,end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid = (start+end)/2;
            long long int count=0;
            // cout<<mid<<endl;
            for(int i=0;i<piles.size();i++){
                // if(count<)
                count=count+ceil((double)piles[i]/mid);
            }
            // cout<<start<<" "<<mid<<" "<<count<<" "<<end<<endl;
            // if(count)z
            if(count<=h){
                
                m=min(m,mid);
                end = mid - 1;
                // return m;
            }
            else start = mid + 1;
        }   
        return m;
    }
};