#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,x;
	    
	    int a1 = pow(2,n);
	    int a2 = pow(2,x);
	    
	    cout<<a2/a1<<endl;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
while(t--){
    int n1,n2;
    cin>>n1>>n2;
    
    if(n1>n2){
        cout<<"LOSS"<<endl;
    } else if(n1<n2){
        cout<<"PROFIT"<<endl;
    } else{
        cout<<"NEUTRAL"<<endl;
    }
}
	return 0;
}


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if((a-b)%2==0){
	        cout<<(a+b)/2<<endl;
	    } else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
