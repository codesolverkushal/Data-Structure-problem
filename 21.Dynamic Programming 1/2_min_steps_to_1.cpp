#include<bits/stdc++.h>
using namespace std;

int count_min(int n){

    int c = 0;
    
    while (n>1)
    {
       if(n%3==0){
       n = n/3;
       c++;
    }
    else if(n%2==0 && (n-1)%3==0){
        n = n-1;
        c++;
    }
    else{
        n = n/2;
        c++;
    }
    
  
}

return c;
}
int main(){
    int n;
    cin>>n;
    cout<<count_min(n)<<endl;
return 0;
}