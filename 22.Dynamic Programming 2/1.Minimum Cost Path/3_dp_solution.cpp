#include<bits/stdc++.h>
using namespace std;

int dpApproach(int** input, int m, int n){
    
    int **output = new int*[m];
    for (int i = 0; i < m; i++)
    {
        output[i] = new int[n];
    }

    output[m-1][n-1] = input[m-1][n-1];

    for (int i = n-2; i >=0; i--)
    {
        output[m-1][i] = output[m-1][i+1] + input[m-1][i];
    }

    for(int i = m-2;i>=0;i--){
        output[i][n-1] = output[i+1][n-1] + input[i][n-1];
    }

    for(int i = m-2;i>=0;i--)
    {
        int x = 0, y = 0, z = 0;
        for (int j = n-2;j>=0;j--)
        {


           
            output[i][j] = min(output[i][j+1],min(output[i+1][j+1],output[i+1][j])) +input[i][j];
        }
        
    }

    return output[0][0];
  

  
    


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
   cout<<dpApproach(input,m,n)<<endl;
    
return 0;
}