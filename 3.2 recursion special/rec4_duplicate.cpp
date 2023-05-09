#include<iostream>
#include<algorithm>
using namespace std;

string dupchar(string s){
     if(s.length()==0){
        return "";
     }

     char ch = s[0];
     string ans = dupchar(s.substr(1));
     

     if(ch == ans[0]){
        return ans;
     }
     else{
        return ch + ans;
     }

}
int main(){

    cout<<dupchar("kkkuushaaall  ttthhhaaakuuur");
}