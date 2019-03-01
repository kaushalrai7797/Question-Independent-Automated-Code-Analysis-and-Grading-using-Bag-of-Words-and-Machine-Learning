#include <stdio.h>
#include <math.h>

int main(void) {
	int t,y,d,day;
	scanf("%d",&t);
	
	while(t--)
	{
		d=0;
		scanf("%d",&y);
		
		y=y-1900;printf("%d\n",y);
		d+=abs(y)*365;printf("%d\n",d);
		d+=(abs(y)-1)/4;printf("%d\n",d);
		day=d%7;printf("%d\n",day);
		
		switch(day)
		{
			case 0: printf("monday\n");
					break;
			case 1: printf("tuesday\n");
					break;
			case 2: printf("wednesday\n");
					break;
			case 3: printf("thursday\n");
					break;
			case 4: printf("friday\n");
					break;
			case 5: printf("saturday\n");
					break;
			case 6: printf("sunday\n");
					break;
			default:printf("no\n");
					
		}
		
	}
	
	return 0;
}
