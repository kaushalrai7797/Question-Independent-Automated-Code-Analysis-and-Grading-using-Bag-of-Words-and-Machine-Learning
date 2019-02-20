#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j,c=0;
        if(n>=2001)
        {
            i=2001;
            j=n;
        }
        else
        {
            i=n;
            j=2001;
        }
        for(int k=i;k<j;k++)
        {
            if(k%4==0)
                c++;
        }
        i=j-i+c;
        i=i%7;
        if(n<2001)
        {
            i=7-i;
        }
            switch(i)
            {
                case 0: printf("monday\n");
                break;
                case 1: printf("tuesday\n");
                break;
                case 2: printf("wednesday\n");
                break;
                case 3: printf("thursday\n");
                break;
                case 4: printf("friday\n");
                break;
                case 5: printf("saturday\n");
                break;
                case 6: printf("sunday\n");
            }
    }
}
