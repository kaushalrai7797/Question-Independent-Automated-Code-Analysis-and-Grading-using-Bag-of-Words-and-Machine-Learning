#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
	    int c,d,l,k,j=0;
	    scanf("%d %d %d",&c,&d,&l);
    	if(c>2*d)
    	k=(c-d)*4;
    	else
    	k=d*4;
    	if((l>=k)&&(l<=(c+d)*4))
    	{
    		if(l%4==0)
    			j=1;
    	}
    	if(j==1)
	    printf("\n YES");
	    else
    	printf("\n NO");
    }
    return 0;
}