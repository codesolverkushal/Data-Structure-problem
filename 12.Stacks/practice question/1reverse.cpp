#include<bits/stdc++.h>
using namespace std;
#include<stack>

int main(){
    string s1 = "kushal";
    stack<char> s;

    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        s.push(s1[i]);
        cout<<s1[i]<<endl;
    }
    string s2 = "";
    while (!s.empty())
    {
        char ch = s.top();
        s2.push_back(ch);

        s.pop();
    }
    cout<<"Answer is "<<s2<<endl;
    
    
}