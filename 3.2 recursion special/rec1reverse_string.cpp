#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void rev(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    rev(ros);
    cout<<s[0];

}
int main(){
    rev("kushal");
}
