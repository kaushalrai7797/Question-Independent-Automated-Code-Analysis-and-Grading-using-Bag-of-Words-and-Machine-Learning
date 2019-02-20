#include<stdio.h>
int main()
{int t;
scanf("%d",&t);
while(t--)
{

	char a[1000];
	scanf("%s",a);
	int i=0,count=0,count_s=0,count_m=0;
	while(a[i]!='\0')
	{
		if((a[i]=='s'&&a[i+1]=='m')||(a[i]=='m'&&a[i+1]=='s'))
		 {
		 count=count+1;
	     i=i+1; 
	     }
	 i=i+1;    
	}
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]=='s')
		count_s++;
		else
		count_m++;
		i=i+1;
	}
	count_s=count_s-count;
	if(count_s>count_m)
	printf("snakes\n");
	else if(count_s==count_m)
	printf("tie\n");
	else
	printf("mongooses\n");
}
return 0;
}