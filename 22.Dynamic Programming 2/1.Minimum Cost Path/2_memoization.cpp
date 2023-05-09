#include<bits/stdc++.h>
using namespace std;

int solveKushalCode(int** input, int m , int n, int i, int j, int **output){
     if(i == m-1 && j == n-1){
        return input[i][j];
     }

     if(i>=m || j>=n){
        return INT_MAX;
     }

     if(output[i][j] != -1){
        return output[i][j];
     }

     int x = solveKushalCode(input,m,n,i,j+1,output);
     int y = solveKushalCode(input,m,n,i+1,j+1,output);
     int z = solveKushalCode(input,m,n,i+1,j,output);

     int ans = min(x,min(y,z)) + input[i][j];

     output[i][j] == ans;

     return ans;
}

int solveMinPath(int** input, int m, int n){

    int **output =  new int*[m];

    for (int i = 0; i < m; i++)
    {
        output[i] = new int[n];
        for(int j = 0;j<n;j++){
            output[i][j] = -1;
        }
    }
    
    
    return solveKushalCode(input, m, n,0, 0,output);
}

int main(){
    int m, n;
    cin>>m>>n;

    int **input = new int*[m];

    for (int i = 0; i < m; i++)
    {
       input[i] = new int[n];
       for (int j = 0; j < n; j++)
       {
            cin>>input[i][j];
       }
       
    }
   cout<<solveMinPath(input,m,n)<<endl;
    
return 0;
}