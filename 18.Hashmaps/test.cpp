#include<iostream>
#include<unordered_map>
using namespace std;

int highFre(int* arr, int size){
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++){
    m[arr[i]]++;
    }
    // Printing of Unordered_MAP
    cout << "Element Frequency" << endl;

    for(auto i:m){
        cout<<i.first<<"        "<<i.second<<endl;
    }

    cout<<"Maximum time this element come in the array"<<endl;
    
    int max = INT_MIN;
    int kushal = -1;
    for (auto i : m){
        if(i.second>max){
             max = i.second;
             kushal = i.first;
        }
    }
    return kushal;
  
}
  
int main()
{
    int arr[] = { 1,4,3,2,2,4,9,9,9,9,9,97,6,54,33,2,3,4,5,66,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = highFre(arr,n);
    cout<<ans;
 
    return 0;
}