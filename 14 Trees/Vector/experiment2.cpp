#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main(){
    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        cout<<"capacity: "<<v.capacity()<<endl;
        v.push_back(i+1);

        cout<<"size: "<<v.size()<<endl;
    }
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v.at(i)<<endl;
    // }
    
return 0;
}