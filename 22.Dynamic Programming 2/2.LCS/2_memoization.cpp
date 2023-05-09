#include<bits/stdc++.h>
using namespace std;

int kushalSolver(string s, string t, int **output){
    int m = s.size();
    int n = t.size();

    if(s.size() == 0|| t.size()==0){
        return 0;
    }
    
    if(output[m][n] != -1){
        return output[m][n];
    }
    int ans;
    if(s[0] == t[0]){
        ans = 1 + kushalSolver(s.substr(1),t.substr(1),output);

    }
    else{
        int a = kushalSolver(s.substr(1),t,output);
        int b = kushalSolver(s,t.substr(1),output);
        int c = kushalSolver(s.substr(1),t.substr(1),output);

        ans = max(a,max(b,c));
 
    }
        output[m][n] = ans;
        return ans;

    
    
}
int lcs(string s, string t){
    int m = s.size();
    int n = t.size();
    int **output = new int*[m+1];

    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n+1];
        for (int j = 0; j<= n; j++)
        {
            output[i][j] = -1;
        }
        
    }
    return kushalSolver(s,t,output);
    


}
int lcs2(string s, string t){

    if(s.size() == 0 || t.size()==0){
        return 0;
    }
    if(s[0] == t[0]){
        return 1 + lcs2(s.substr(1),t.substr(1));
    }

    else{
    int a = lcs2(s.substr(1),t);
    int b = lcs2(s.substr(1),t.substr(1));
    int c = lcs2(s,t.substr(1));
    
    return max(a,max(b,c));
    }

}
int main(){
    
    string s;
    string t;
    cin>>s;
    cin>>t;
    cout<<lcs(s,t)<<endl;
    cout<<lcs2(s,t)<<endl;
return 0;
}