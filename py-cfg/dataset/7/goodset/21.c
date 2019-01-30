
#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i;
    char s[1000000];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        long long int sum=0,len;
        len=strlen(s);
        for(i=0;i<len;i++)
        sum=sum+s[i]-'0';
        int r=sum%9;
        if(sum>9)
        {
            if(r<5)
            printf("%d\n",r);
            else
            printf("%d\n",9-r);
        }
        else 
        {
           if(len!=1)
           printf("%lld\n",9-sum);
           else
           printf("%d\n" , (r < 5) ? r : (9-r));
           
           }
        }
    
    return 0;
    
}
