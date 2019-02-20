#include<stdio.h>
int main()
{
	long long int d,C,test,L,count;
	scanf("%lld",&test);
	while(test--)
	{
		count=0;
		scanf("%lld %lld %lld", &C, &d, &L);
		if(L%4==0&&L<=(C+d)*4&&((L>=d*4&&C-2*d<=0)||(L>=4*(C-d)&&C-2*d>0)))
			count=1;
		if(count==1)
			printf("yes\n");
		else
			printf("no\n");
	}
return(0);
}