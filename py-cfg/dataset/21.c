#include <stdio.h>

int main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {
            int x,reverse=0;
            scanf("%d",&x);
           while(x>0)
            {
               reverse = reverse * 10;
               reverse = reverse + x%10;
                x  = x/10;
            }
            printf("\n%d",reverse);
    }
    return 0;
}
