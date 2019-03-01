#include <stdio.h>
#include<string.h>
int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	   int n,i,mangoose=0,snake=0;
	   char S[100];
	   scanf("%s",S);
	   n=strlen(S);
	   for(i=0;i<n;i++)
	   {
	       if(S[i]=='s')
	       snake++;
	       else
	       mangoose++;
	   }
	   for(i=0;i<n;i++)
	   {
	       if((S[i]=='s' && S[i+1]=='m') || (S[i]=='m' && S[i+1]=='s'))
		{
			snake--;
			i++;
		}
	   }
	   if(mangoose>snake)
	   printf("mangooses\n");
	   if(mangoose<snake)
	   printf("snakes\n");
	   if(mangoose==snake)
	   printf("tie\n");
	}
	return 0;
}
