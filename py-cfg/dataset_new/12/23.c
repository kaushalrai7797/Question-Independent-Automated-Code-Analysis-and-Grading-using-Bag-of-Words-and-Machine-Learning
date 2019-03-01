#include<stdio.h>
int main()
{
    int t,n,m,sum=0;
    scanf("\n%d",&t);
for(int i=0;i<t;i++)
{
scanf("\n%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("\n%d",&a[i]);
}
scanf("\n%d",&m);
int b[m];
for(int i=0;i<m;i++)
{
    scanf("\n%d",&b[i]);
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i]==b[j])
        {
            sum++;
            break;
        }
    }
}
if(m==sum)
{
    printf("\nyes");
}
    else
        printf("\n no");
}
return 0;
}
