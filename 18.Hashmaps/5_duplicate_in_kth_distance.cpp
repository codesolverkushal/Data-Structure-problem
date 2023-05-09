#include<bits/stdc++.h>
using namespace std;

bool ansWeGet(int* a, int n,int k){
    unordered_map<int,int> map;
    for (int i = 0; i < n; i++)
    {
       int x = a[i];

        if(map.count(x)>0 && i-map[x]<=k){
            return true;
        }
        else{
            map[x] = i;
        }
    }
    return false;
    
}

int main(){
 int a[] = {1,2,4,2,4};
 int n = sizeof(a)/sizeof(a[0]);
 
 cout<<"Enter the kth distance "<<endl;
 int k;
 cin>>k;
 bool ans = ansWeGet(a,n,k);
 if(ans){
    cout<<"You get duplicate"<<endl;
 }   
 else{
    cout<<"You do not get duplicate"<<endl;
 }
return 0;
}