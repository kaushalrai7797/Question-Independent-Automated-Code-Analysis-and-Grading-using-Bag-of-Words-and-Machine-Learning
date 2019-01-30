#include <stdio.h>
int main(void) {
    int i,t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    { 
    long int a;
    scanf("%ld",&a);
    if(a%9==0)
    printf("0\n");
    else
    {
    	for(i=1;i<9;i++)
    	{

    		 if((a-i)%9==0)
    		{
    			printf("%d\n",i);
    			break;
    		}
             	if((a+i)%9==0)
    		{
    			printf("%d\n",i);
    			break;
    		}
    	}
    }
  }
	return 0;
}
