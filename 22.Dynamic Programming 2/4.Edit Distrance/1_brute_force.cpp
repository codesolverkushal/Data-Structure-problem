#include<bits/stdc++.h>
using namespace std;

int solverCode(string s, string t, int **output){
   int m = s.size();
   int n = s.size();
   if(s.size()==0 || t.size() == 0){
    return max(s.size(), t.size());
   }

   if(output[m][n]!=-1){
       return output[m][n];
   }
   
   int ans;
   if(s[0] == t[0]){
    ans = solverCode(s.substr(1),t.substr(1),output);
   } 

   else{
       int x = solverCode(s.substr(1),t,output) + 1;
       int y = solverCode(s,t.substr(1),output) + 1;
       int z = solverCode(s.substr(1), t.substr(1),output) + 1;

       ans =  min(x,min(y,z));
   }  
   output[m][n] = ans;
   return ans;
}

int minArr(string s, string t)
{
    int m = s.size();
    int n = t.size();
    int **output = new int*[m+1];
    for (int i = 0; i <=m; i++)
    {
        output[i] = new int[n+1];
        for (int j = 0; j <=n; j++)
        {
            output[i][j] = -1;
        }
        
    }
    return solverCode(s,t,output);
    

}

int main(){
   string s,t;
   cin>>s>>t;
   cout<<minArr(s,t)<<endl; 
return 0;
}