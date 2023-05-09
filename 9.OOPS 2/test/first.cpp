#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  getline(cin,s);

  for(int i = 0; i<s.length();i++)
   {
    char ch = s[i];
      if (s[i]<'a' && s[i]>'z')
      {
         ch = ch - 32;
      }
      else{
         ch = ch-32;
      }
      
   }
   cout<<s<<endl;
return 0;
}