#include<stdio.h>
int main( )
{
	int i,j,k,t,a,yr;
	scanf("%d",&t);
	while(t--)
{
	scanf("%d",&yr);
	i=(yr-1)/4;
	a=(yr-1)*365;
	j= (yr-1)/100; 
	k=(a+i-j+(j/4))%7;
	  if(k==0)
	  printf("monday\n");
	 else  if(k==1)
	  printf("tuesday\n");
	 else if(k==2)
	  printf("wednesay\n");
	 else if(k==3)
	  printf("thursday\n");
	  else if(k==4)
	  printf("friday\n");
	  else if(k==5)
	   printf("saturday\n");
	  if(k==6)
	  printf("sunday\n");
}
return 0;
}