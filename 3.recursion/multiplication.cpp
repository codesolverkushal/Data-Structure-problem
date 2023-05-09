#include<iostream>
using namespace std;
int mul(int m, int n){
    if(n==0){
        return 0;
    }
    int a = mul(m,n-1);
    return a + m;
}
int main()
{
    int n,m;
    cin>>m>>n;
    cout<<mul(m, n)<<endl;

}