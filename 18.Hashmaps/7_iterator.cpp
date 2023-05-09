#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<string,int> map;
map["abc1"] = 1;
map["abc2"] = 2;
map["abc3"] = 3;
map["abc4"] = 4;
map["abc5"] = 5;
map["abc6"] = 6;
map["abc7"] = 7;

unordered_map<string, int>:: iterator it = map.begin();

while (it!=map.end())
{
    cout<<it->first<<" " <<" "<<it->second<<endl;
    it++;
}

vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);

vector<int>::iterator it1 = v.begin();

while (it1!=v.end())
{
    cout<<*it1<<" ";
    it1++;
}


return 0;
}