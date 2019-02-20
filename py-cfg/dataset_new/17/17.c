#include <stdio.h>
int main()
{
    int T;
    while(T)
    {
        int c,d,l;
        scanf("%d %d %d",&c,&d,&l);
        c=c*4;
        d=d*4;
        if(c+d==l||c==l||d==l)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    T--;
    }
}