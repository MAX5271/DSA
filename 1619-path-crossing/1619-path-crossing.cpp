class Solution {
public:
    bool isPathCrossing(string path) {
       int n=path.length();
       int a1[n+1],a2[n+1];
       int i,j,v=0,h=0;
       a1[0]=0;
       a2[0]=0;
       for(i=0;i<n;i++){
         if(path.at(i)=='N')
         v++;
         else if(path.at(i)=='S')
         v--;
         else if(path.at(i)=='E')
         h++;
         else if(path.at(i)=='W')
         h--;

         a1[i+1]=v;
         a2[i+1]=h;
       }
       for(i=0;i<n+1;i++){
           for(j=i;j<n+1;j++){
              if(i!=j)
              if(a1[i]==a1[j]&&a2[i]==a2[j])
              return true;
           }
       }
       return false;
    }
};