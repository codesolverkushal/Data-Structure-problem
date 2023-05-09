#include<bits/stdc++.h>
using namespace std;
#include<stack>


bool validParenthesis(string exp,stack<char> s){
    

    for (int  i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
       
        
        else{
         if(!s.empty()){
                char top = s.top();
                if(((top == '(' )&& (ch == ')')) || ((top == '{') && (ch =='}')) || ((top =='[') && (ch == ']')))
                {
                    s.pop();
                }
                
                
         }
           
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }

    }                
   
    
   

int main(){
    stack<char> s;
    string exp = "[({5})]";

    bool ans = validParenthesis(exp,s);
    if(ans){
        cout<<"It is valid"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
}