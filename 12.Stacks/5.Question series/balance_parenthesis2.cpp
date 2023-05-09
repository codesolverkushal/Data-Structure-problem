#include<bits/stdc++.h>
using namespace std;
#include<stack>


// void validParenthesis(string exp){

   
//     // if(s.empty()){
//     //     return true;
//     // }
//     // else{
//     //     return false;
//     // }
//     // }                
   
// }

   

int main(){
    string exp = "[1+(2+{5})]";

    stack<char> s;

    for (int  i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            
            cout<<ch<<endl;
            s.push(ch);
        }
       
         
         if(!s.empty())
         {
                char top = s.top();
                if(((top == '(' )&& (ch == ')')) || ((top == '{') && (ch =='}')) || ((top =='[') && (ch == ']')))
                {
                
                    cout<<ch<<endl;
                    s.pop();
                 }
          }
          
        }
    if(s.empty()){    
               cout<<"Valid";
            }
    else{
            cout<<"Invalid";
            }
           
}
  

 