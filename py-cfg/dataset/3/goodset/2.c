#include <stdio.h>
#define BLACK 0
#define WHITE 1

int main()
{

    int cases,n,i,j,start,end,prev,next;
    char c;
    scanf("%d",&cases);
    label:
    while(cases--)
    {
        //printf("n = ");
        scanf("%d\n",&n);
        int a[2][n];
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf(" %c",&c);
                a[i][j]=(c=='.')?WHITE:BLACK;
                //a[i][j]=rand()%2;
            }
        }

    /*
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
*/
        for(i=0;1;i++)
            if(a[0][i]==BLACK || a[1][i]==BLACK)
            {
                start=i;
                break;
            }

        for(i=n-1;1;i--)
            if(a[0][i]==BLACK || a[1][i]==BLACK)
            {
                end=i;
                break;
            }
        //printf("start = %d end = %d\n\n",start,end);
        for(i=start;i<=end;i++)
            if((a[0][i] == WHITE) && a[1][i]==WHITE)  //W
            {                                           //W
                printf("no\n");
                goto label;
            }

        for(i=start+1;i<=end;i++)      //  WB  BW
        {                              //  BW  WB
            if( (a[0][i]==BLACK && a[1][i-1]==BLACK) &&    (a[0][i-1]==WHITE && a[1][i]==WHITE)    )
            {
                printf("no\n");
                goto label;
            }
            if( (a[0][i]==WHITE && a[1][i-1]==WHITE) &&    (a[0][i-1]==BLACK && a[1][i]==BLACK)    )
            {
                printf("no\n");
                goto label;
            }
        }

        for(i=start;i<=end;i++)
        {
            if((a[0][i] == a[1][i]) && a[1][i]==BLACK)
            {
                if(start==i)
                {
                    while(a[0][i]==BLACK && a[1][i]==BLACK)
                        i++;
                }
                else{
                int rectlength=0;
                prev=(a[0][i-1]==BLACK)?0:1;  //UP OR DOWN BLACK FOUND?
                while((a[0][i] == a[1][i]) && a[1][i]==BLACK)
                {
                    if(i==end)
                    {
                        printf("yes\n");
                        goto label;
                    }
                    rectlength++;
                    i++;
                }
                if(rectlength%2==0 )
                {   //IF EVEN
                    if(a[prev][i]==WHITE)
                    {
                        printf("no\n");
                        goto label;
                    }
                }
                else
                {
                    if(a[prev][i]==BLACK)
                    {
                        printf("no\n");
                        goto label;
                    }
                }
                }
            }
        }
        printf("yes\n");
    }


}
