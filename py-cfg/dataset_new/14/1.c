#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for (k=0;k<t;k++)
    {
        int x,y,p,i;
        scanf("%d %d",&x,&y);
        while(x-y!=0&&x!=0&&y!=0)
        {
            if (x>y)
            {
                x=x-y;

            }
            else
            {

                y=y-x;
            }

        }
        printf("%d",x+y);

    }


}
