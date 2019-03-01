#include <stdio.h>

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
		    if(temp==1)
		        {
		            total+=n;
		            times++;
		            total-=k;
		            temp++;
		            continue;
		        }
		    total-=k;
		    
		    if(temp%7==0)   //sunday
		        {
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
    		    }
		    temp++;
		}
		if(num==0)
		    printf("%d\n",times);
		else
		    printf("-1\n");
	}
	return 0;
}