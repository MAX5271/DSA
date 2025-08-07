class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> a(gas.size(),0);
        int sum=0;
        for(int i=0;i<gas.size();i++){
            a[i]=gas[i]-cost[i];
        }
        int ind=0;
        for(int i=0;i<gas.size();i++){
            sum+=a[i];
            if(sum<0){
                ind=i+1;
                sum=0;
            }
        }
        if(ind==gas.size()+1) return -1;
        sum=0;
        for(int i=0;i<gas.size();i++){
            sum+=a[(i+ind)%gas.size()];
        }
        if(sum>=0) return ind;
        else return -1;
    }
};