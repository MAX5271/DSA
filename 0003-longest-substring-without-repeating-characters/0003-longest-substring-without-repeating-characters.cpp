class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> h(256,-1);
        int start=0,end=0,size=0;
        while(end<s.length()){
            if(h[(int)s[end]]==-1) {
                h[(int)s[end]]=end;
            }else{
                for(int i=start;i<h[(int)s[end]];i++) h[(int)s[i]]=-1;
                start=h[(int)s[end]]+1;
                h[(int)s[end]]=end;
            }
            size=max(size,end-start+1);
            end++;
        }
        return size;
    }
};