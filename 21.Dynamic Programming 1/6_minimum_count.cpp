#include<bits/stdc++.h>
using namespace std;

int kushalCodeHelper(int n, int* ans){
    if(n<=3){
        return n;
    }

    if(ans[n]!=-1){
        return ans[n];
    }

    int x = sqrt(n);
    int y = pow(x,2);
    if(y==n){
        return 1;
    }

    int ouput = kushalCodeHelper(x,ans);

   

    ans[n] = ouput;

    return ans[n];





}

int checkCount(int n){
    int* ans = new int[n+1];
    for (int  i = 0; i <= n; i++)
    {
      ans[i] = -1;
    }
    return kushalCodeHelper(n,ans);
   
}
int main(){
    int n;
    cin>>n;
    cout<<checkCount(n)<<endl;
return 0;
}