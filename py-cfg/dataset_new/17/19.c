#include<stdio.h>
int main()
{
	 int t,d,c,l,cn;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		cn=0;
		scanf("%d %d %d", &c, &d, &l);
		if(l%4==0&&l<=(c+d)*4&&((l>=d*4&&c-2*d<=0)||(l>=4*(c-d)&&c-2*d>0)))
			cn=1;
		if(cn==1)
			printf("yes\n");
		else
			printf("no\n");
	}
return(0);
}