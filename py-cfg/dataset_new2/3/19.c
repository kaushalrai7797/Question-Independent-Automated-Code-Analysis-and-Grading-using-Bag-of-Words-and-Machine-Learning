#include<stdio.h>
int main()
{
    int N,s=0,s1=0,i,num;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num);
        s1=s1+num;
        s=s+(i+1);
    }
    if(s1==s)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
