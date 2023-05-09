#include<iostream>
#include<algorithm>
using namespace std;

void rpi(string s){
    if(s.length()==0){
        return;
    }
    if (s[0] == 'p' && s[1]=='i')
    {
        cout<<"3.14";
        rpi(s.substr(2));
    }
    else{
        cout<<s[0];
        rpi(s.substr(1));
    }
    
}
int main(){
    rpi("pijhdsjhjgpijhpjpi");
}