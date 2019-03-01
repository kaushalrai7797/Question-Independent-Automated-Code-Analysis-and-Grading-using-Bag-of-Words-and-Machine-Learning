#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d;
        scanf("%d",&d);
        int n;
        n=d-2001;
        int a;
        a=n;
        if(n%4==-1)
            n=(n-3)/4;
        else if(n%4==-2)
            n=(n-2)/4;
        else if(n%4==-3)
            n=(n-1)/4;
        else n=n/4;
        a=n+a;
        while(a<0)
            a=7+a;
        int b=a%7;
        switch(b){
            case 0: printf("Monday\n");
                break;
            case 1: printf("Tuesday\n");
                break;
            case 2: printf("Wednesday\n");
                break;
            case 3: printf("Thursday\n");
                break;

            case 4:printf("Friday\n");
                break;
            case 5:printf("saturday\n");
                break;
            case 6: printf("sunday\n");
                break;
        }
    }
}
