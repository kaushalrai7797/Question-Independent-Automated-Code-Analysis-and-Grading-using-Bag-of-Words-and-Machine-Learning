#include <stdio.h>

int main()
{
    int t;
    int yr,a,p,day;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &yr);
        if(yr==2001)
        {
            day=0;
        }
        else if(yr>2001)
        {
            a=yr-2001;
            p=a/4-a/100+a/400;
            day=a+p;
            day=day%7;
        }
        else if(yr>=1900 && yr<2000)
        {
            a=yr-1900;
            p=(a-1)/4;
            day=a+p;
            day=day%7;
        }
        else if(yr==2000)
        {
            day=5;
        }

        switch(day)
        {
        case 0:
            printf("monday\n");
            break;
        case 1:
            printf("tuesday\n");
            break;
        case 2:
            printf("wednesday\n");
            break;
        case 3:
            printf("thursday\n");
            break;
        case 4:
            printf("friday\n");
            break;
        case 5:
            printf("saturday\n");
            break;
        case 6:
            printf("sunday\n");
            break;
        }
    }
    return 0;
}