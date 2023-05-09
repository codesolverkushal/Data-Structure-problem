#include<iostream>
using namespace std;
void print(int n){

    cout<<n<<endl;
}
bool checki(int n){
    print(n);
   
   if (n==1 || n==2)
   {
    return true;
   }
   if(n%2==1 || n==0){
    return false;
   }
   return checki(n/2);
   
    
    
    
    
}
int main(){
    int n;
    cin>>n;
    
    bool ans = checki(n);

    if(ans){
        cout<<"Yes";

    }
    else{
        cout<<"No";
    }
}