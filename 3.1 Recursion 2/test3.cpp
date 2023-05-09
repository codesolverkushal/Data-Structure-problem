#include<iostream>
using namespace std;
bool check(int n){
    if(n==0 || n==1){
        return true;
    }
    int prev = 1;
    int count = 2;
    int temp;

    while (count<=n)
    {
        if(count == n){
            return true;
        }

        temp = prev + count;
        prev = count;
        count = temp;
    }
    return false;
    
}
int main(){
     int n;
     cin>>n;
     bool ans = check(n);

     if(ans){
        cout<<"It is present in the fibonacci series"<<endl;
     }
     else{
        cout<<"It is not present in the fibonacci series"<<endl;
     }
}