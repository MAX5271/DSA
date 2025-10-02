class Solution {
public:
    int maxBottlesDrunk(int nB, int nE) {
        int ans=nB,empty=nB;
        while(empty>=nE){
            empty-=(nE-1);
            ans++;
            nE++;
        }
        return ans;
    }
};