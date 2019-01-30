 #include <stdio.h>
#include <string.h>

char A[10000000];
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,l,c=0;
	    scanf("%s",A);
	    l=strlen(A);
	    for(i=0, j=l-1; i<=j; j--)
	    {
	        if(A[i]=='<' && A[j]=='>')
	        {
	            c=c+2;
	            i++;
	        }
	        else if(A[i]=='<' && A[j]=='<')
	        {
	            c=0;
	            i=0;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}