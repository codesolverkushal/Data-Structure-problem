#include <stdio.h>

int main(void) 
{
    	int t,n,b,res;
	scanf("%d",&t);
    while(t--)
    {
        res=0;
        scanf("%d",&n);
        while(n--)
        { 
            scanf("%d",&b);
	        res^=b;
	    }
	    printf("%d\n",res);
	}
	return 0;
}

