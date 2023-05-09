#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int* a,int size){
   vector<int> v;
   unordered_map<int,bool> map;
   for (int i = 0; i < size; i++)
   {
      if(map.count(a[i])>0){
        continue;
      }
      map[a[i]] = true;
      v.push_back(a[i]);
   }
   return v;
   
}
int main(){
    int a[] = {1,2,3,2,3,4,5,6,74,4,56,78,2,2,3,5,6,76,8};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> output = removeDuplicate(a,n);

    for (int i = 0; i < output.size(); i++)
    {
        cout<<output.at(i)<<" ";
    }
    
return 0;
}