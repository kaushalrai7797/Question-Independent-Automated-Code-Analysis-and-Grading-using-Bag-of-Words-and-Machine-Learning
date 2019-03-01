#include<stdio.h>
int main()
{
int t,count1,count2,n;           // one for forward and other for reverse
scanf("%d",&t);
while(t--)
{
count1=0,count2=0;
scanf("%d",&n);
int a[n];              // Chef's fingers
int b[n];              // Glove length
for(int i=0;i<n;i++)
	scanf("%d",a+i);
for(int j=0;j<n;j++)
	scanf("%d",b+j);
for(int i=0;i<n;i++)
{
 if(a[i]<=b[i])
	count1++;
 if(a[i]<=b[n-i-1])
	count2++;
}
if(count1==n && count2!=n)
	printf("front\n");
else if(count1==n && count2==n)
	printf("both\n");
else if(count1!=n && count2==n)
	printf("back\n");
else if(count1!=n && count2!=n)
	printf("none\n");
}
return 0;
}

