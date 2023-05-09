#include<bits/stdc++.h>
using namespace std;

int solverCode(string s, string t, int m, int n){
    if(m<0 || n<0){
        return 0;
    }

    if(s[m] == t[n]){
        return 1 + solverCode(s,t,m-1,n-1);
    }
    else{
         return max(solverCode(s,t,m-1,n),solverCode(s,t,m,n-1));
    }
}
int lcs(string s, string t){
   int m = s.size();
   int n = t.size();

   return solverCode(s,t,m-1,n-1);
}

int main(){
   string s,t;
   cin>>s>>t;
   cout<<lcs(s,t)<<endl; 
return 0;
}