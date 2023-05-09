#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main(){
    //dynamically 
//   vector<int> *vp = new vector<int>();
  vector<int> v;

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  
  v[1] = 100;
  
  cout<<v[0]<<endl;
  cout<<v[1]<<endl;
  cout<<v[2]<<endl;
  

  cout<<v.size()<<endl;

  cout<<v.at(0)<<endl;
  cout<<v.at(1)<<endl;
  cout<<v.at(2)<<endl;

//   for remove the last element use:v.pop_back()
return 0;
}