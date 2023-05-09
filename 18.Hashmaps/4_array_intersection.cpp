#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> myAns(int* a1,int* a2, int n, int n1 ){
      vector<int> ans;
      unordered_map<int,int> map;

      for (int i = 0; i < n; i++)
      {
        map[a1[i]]++;
      }
      
     for (int i = 0; i < n1; i++)
     {
       int a = a2[i];

       if(map.count(a)>0){
          map[a]--;
          ans.push_back(a);
       }
     }
     return ans;
      
}

int main(){
    int a1[] = {2,3,4,5,2 };
    int a2[] = {3,2,4};
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);

    vector<int> output = myAns(a1,a2,n,m);
    if(output.size() == 0){
      cout<<"No common element between them"<<endl;
    }

    for (int i = 0; i < output.size(); i++)
    {
      cout<<output.at(i)<<" ";
    }
    

}
