#include<stdio.h>
#include<string.h>
int main()
{
char s[16];
int t,a=1,b=1,n,l=0,e=0,d=0;
scanf("%d",&t);
while(t--)
    {
        e=0;d=0;a=1;b=1;l=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%s",s);
            l=strlen(s);
            if(e!=1)
            {
                if(s[l-1]=='n'&&s[l-2]=='a'&&s[l-3]=='m')
                a++;
            else
                b++;
         if((a-b)==2)
        {
            d=1;
            e=1;
        printf("superheroes\n");
        }
        if((b-a)==3)
        {
          d=1;
        e=1;
        printf("villains\n");
        }
        }
        }
        if(d==0)
        printf("draw\n");
 
    }
return 0;
} 