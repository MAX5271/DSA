class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> a;
        vector<int> count(62,0);
        for(int i=0;i<s.length();i++){
            if(s[i]<='z'&&s[i]>='a')
            count[(int)(s[i]-'a')]++;
            else if(s[i]>='A'&&s[i]<='Z') count[(int)(s[i]-'A')+26]++;
            else count[(int)(s[i]-'0')+52]++;
        }
        for(int i=0;i<26;i++){
            
            a.push_back({count[i],(char)(i+'a')});
        }
        for(int i=0;i<26;i++){
            
            a.push_back({count[i+26],(char)(i+'A')});
        }
        for(int i=0;i<10;i++){
            
            a.push_back({count[i+52],(char)(i+'0')});
        }
        
        sort(a.begin(),a.end());
        s="";
        for(int i=a.size()-1;i>-1;i--){
            for(int j=0;j<a[i].first;j++)
            s.push_back(a[i].second);
        }
        return s;
    }
};