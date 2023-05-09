 #include<bits/stdc++.h>
 using namespace std;

 int kushalSolver(string s, string t){
    int m = s.size();
    int n = t.size();

    int **output = new int*[m+1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n+1];
    }
    
    for (int i = 0; i <=n; i++)
    {
        output[0][i] = 0;
    }

    for (int i = 0; i <= m; i++)
    {
        output[i][0] = 0;
    }

    for (int i = 1; i <=m; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(s[m-i] = t[n-j]){
                output[i][j] = 1 + output[i-1][j-1];
            }

            else{
                 int a = output[i-1][j];
                 int b = output[i][j-1];
                 int c = output[i-1][j-1];

                 output[i][j] = max(a,max(b,c));
            }
        }
        
    }
    return output[m][n];
    
    
    
 }
 
 int main(){
    string s,t;
    cin>>s>>t;

    cout<<kushalSolver(s,t)<<endl;
 return 0;
 }