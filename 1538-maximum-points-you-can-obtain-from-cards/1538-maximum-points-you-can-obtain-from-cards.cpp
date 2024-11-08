class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if(k==cardPoints.size()) return accumulate(cardPoints.begin(),cardPoints.end(),0);
        int start=0,end=0,s=0;
        int sum=INT_MAX,window=cardPoints.size()-k;
        while(end<cardPoints.size()){
            s+=cardPoints[end];
            if(end-start+1==window){
                sum=min(sum,s);
            }else if(end-start+1>window){
                s-=cardPoints[start++];
            }
            end++;
        }
        return accumulate(cardPoints.begin(),cardPoints.end(),0)-sum;
    }
};