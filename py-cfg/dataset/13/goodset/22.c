#include<stdio.h>
int main()
{
    long int t,n,c,i;
    char a[100001];
    scanf("%ld",&t);
    while(t--)
    {
        c=0;
        scanf("%ld",&n);
        scanf("%s",&a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='1')
                c++;
        }
        printf("%ld\n",(c*(c+1))/2);
    }
    return 0;
}