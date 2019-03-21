#include<stdio.h>
int sum=0;
int connect(int n)
{
if(n==1)
return 2;
if(n==2)
return 5;
if(n%2!=0)
{
return (n+1)+2*connect(n/2);
}
else
return (n+1)+connect(n/2)+connect(n/2-1);
}
int main()
{
int t,n,m;
scanf("%d",&t);
while(t--)
{sum=0;
scanf("%d%d",&n,&m);
int min=connect(n);
int max=n*(n+3)/2;
if(m<=max&&m>=min)
printf("0\n");
else if(m>max)
printf("%d\n",m-max);
else
printf("-1\n");
}
return 0;
}
