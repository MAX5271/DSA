class Solution {
public:
    bool checkValidString(string s) {
        stack<char> a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') a.push(i);
            else if(s[i]=='*') b.push(i);
            else if(a.empty()&&b.empty()) return false;
            else{
                if(!a.empty()) a.pop();
                else b.pop();
            }
        }
        while(!a.empty()){
            if(b.empty()) return false;
            if(a.top()<b.top()){
                a.pop();
                b.pop();
            }else return false;
        }
        return true;
    }
};