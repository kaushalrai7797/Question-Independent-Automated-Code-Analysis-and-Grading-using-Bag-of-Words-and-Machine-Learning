 #include<stdio.h>
int main(void)
{
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
int n;
char arr[2][n];
for(int j=0;j<2;j++)
{
for(int k=0;k<n;k++)
scanf("%c",&arr[j][k]);
}
int ind1,ind2;
for(int j=0;j<2;j++)
{
for(int k=0;k<n;k++)
{
if(arr[j][k]=='#')
{
ind1=j;
ind2=k;
break;
}
}
}
while(arr[ind1][ind2]=='#')
{
if(ind1==0&&arr[ind1+1][ind2]=='#')
ind1++;
else if(ind1==1&&arr[ind1-1][ind2]=='#')
ind1--;
else if(ind2!=n-1&&arr[ind1][ind2+1]=='#')
ind2++;
}
int flag;
for(int j=0;j<1;j++)
{
for(int k=ind2+1;k<n;k++)
{
if(arr[j][k]=='#')
{
flag=0;
break;
}
flag=1;
}
}
if(flag==0)
printf("no\n");
else
printf("yes\n");
}
return 0;
}
