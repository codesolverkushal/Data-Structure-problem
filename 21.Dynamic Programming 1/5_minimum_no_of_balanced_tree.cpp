#include<bits/stdc++.h>
using namespace std;


int checkCount(int h){
    
    if(h<=1){
        return 1;
    }

    int mod = (int)(pow(10,9) + 7);
    int x = checkCount(h-1);
    int y = checkCount(h-2);

    int temp1 = (int)(((long)(x)*x)%mod);
    int temp2 =(int)((2*(long)(x)*y)%mod);

    int ans = temp1 + temp2;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<checkCount(n)<<endl;
return 0;
}