#include<stdio.h>
int gcd(unsigned long long int a,unsigned long long int b)
{
    unsigned long long int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;

}
int main()
{
    unsigned long long int a,b,c,d,x,y,gd;
    scanf("%llu%llu%llu%llu",&a,&b,&x,&y);
    gd=gcd(x,y);
    if(gd!=0)
    {
    x=x/gd;
    y=y/gd;
    }
    c=(a-(a%x))/x;
    d=(b-(b%y))/y;

    if(c<d)
        printf("%d\n",c);
    else printf("%d\n",d);
    return 0;
}
