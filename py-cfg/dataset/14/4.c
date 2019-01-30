#include<stdio.h>
int main()
{
    int a, b, i=0;
    scanf("%d %d",&a, &b);
    int sub=0,array[100000];
    sub=a-b;
    while(sub>0)
    {
        array[i]=sub%10;
        sub=sub/10;
        i++;
    }
    if(sub%10!=0)
        array[0]-=1;
    else
        array[0]+=1;
    while(i--)
    {
        printf("%d",array[i]);
    }
    return 0;
}