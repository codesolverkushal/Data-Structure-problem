#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

bool ansWeGet(int* a1, int* a2, int n, int m){
    unordered_map<int,int> map;

    for (int i = 0; i < n; i++)
    {
        map[a1[i]]++;
    }
   
   for (auto sp:map)
   {
     cout<<sp.first<<"   ::  "<<sp.second<<endl;
   }
   
   
    
    for (int i = 0; i < m; i++)
    {
        int x = a2[i];
        
       
        if(map.count(x) == 0 || map[x]==0){
            return false;
        }
        else{
            map[x] = map[x] -1;
        }
    }
    return true;
    
    
}

int main(){
    int a1[] = {1,2,2,3,3,4,5,6};
    unordered_map<int,int> map;
    int a2[] = {2,2,5,6,4};

    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);

   

   

  

    bool ans = ansWeGet(a1,a2,n,m);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
return 0;
}