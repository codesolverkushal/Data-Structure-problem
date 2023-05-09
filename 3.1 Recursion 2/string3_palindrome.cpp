#include<iostream>
using namespace std;

bool palindrome(string &s1,int i, int j){
    if(i>j){
        return true;
    }
    if(s1[i]!=s1[j]){
        return false;
    }
    else{
        return palindrome(s1,i+1,j-1);
    }

}
int main(){
    string s1 = "aabbaa";
    int i = 0;
    int j = s1.length()-1;

    bool ans = palindrome(s1,i,j);

    if(ans){
        cout<<"It is palindrome string";

    }
    else{
        cout<<"It is not a palindrome string";
    }
}