#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n ){
    int ans = 0;
    int power = 1;
    while(n>0){
        int r = n%2;
        n = n/2;

        ans = ans*10 +r;
        power = power*10;
    }
    // cout<<ans<<endl;
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int tsubset = pow(2,n);

    for(int i = 0;i<tsubset;i++){
        int bn = decimalToBinary(i);
        // cout<<bn<<endl;
        int div = pow(10,n-1);

        for(int j = 0; j<n;j++){
            int q = bn/div;
            int r = bn%div;

            if(q==0){
                cout<<"-\t";
            } else{
                cout<<a[j]<<"\t";
            }
            bn = r;
            div = div/10;
        }
        cout<<endl;
    }
    
}