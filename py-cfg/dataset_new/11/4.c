#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,s,temp=1,total=0,times=0,num=0;
		scanf("%d%d%d",&n,&k,&s);
		
		while(temp<=s)  //temp is days passing
		{
		    if(temp>=7 && temp%7==0)   //sunday
		        {
		            total-=k;
		            if(total<k)
		                {
		                    num=1;
		                    break;
		                }
		        }
		    else
    		    {
    		        if(total<k)
    		            {
    		                total+=n;
    		                times++;
    		            }
    		        total-=k;
    		    }
		    temp++;
		}
		if(num<1)
		    printf("%d\n",times);
		else
		    printf("-1\n");
	}
	return 0;
}