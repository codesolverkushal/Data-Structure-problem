#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;



   int highestFrequency(int *input, int n){
    unordered_map<int, int> map;
    int maxFreq = 0;
    int ans = -1;
 
   for (int i = 0; i < n; i++)
   {
      map[input[i]]++;
   }
   
   for(auto pic:map){
     if(pic.second>maxFreq){
   
        maxFreq = pic.second;
        ans = pic.first;
     }
   }


   

 return ans;   
}
int main(){
          int a[] = {1,2,3,4,4,4,36,7,8,7};
          int n = sizeof(a)/sizeof(a[0]);

          int ans = highestFrequency(a,n);
          cout<<ans<<" ";


}