#include <stdio.h>
#include<math.h>

int main(void) {
		int i,j,k,t,a=1,yr;
	scanf("%d\n",&t);
	for(a=1;a<t+1;a++)
{
	scanf("%d\n",&yr);
	i=abs(yr-2001);
	j= i/4 ;
	k=(i+j)%7;
	  if(k==0)
	  {
	  printf("monday\n");
	  }
	 else  if(k==1)
	  {
	  printf("tuesday\n");
	  }
	 else if(k==2)
	  {
	  printf("wednesay\n");
	  }
	 else if(k==3)
	  {
	  printf("thursday\n");
	  }
	  else if(k==4)
	  {
	  printf("friday\n");
	  }
	  else if(k==5)
	  {
	   printf("saturday\n");
	  }
	  if(k==6)
	  {
	  printf("sunday");
}
}
	return 0;
}

