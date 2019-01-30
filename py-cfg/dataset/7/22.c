#include <stdio.h>
int main(void) {
    int i;
    long a;
    scanf("%d",&a);
    if(a%9==0)
    printf("0");
    else
    {
    	for(i=1;i<9;i++)
    	{
    		if((a+i)%9==0)
    		{
    			printf("%d",i);
    			break;
    		}
    		else if((a-i)%9==0)
    		{
    			printf("%d",i);
    			break;
    		}
    	}
    }
	return 0;
}