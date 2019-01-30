#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {  int len,sum=0;
    int a,s,d;
        char b[100005];
        scanf("%s",b);
        len=strlen(b);
       // printf("%d",len);
        for(int i=0;i<len;i++)
      {  sum=sum+b[i]-48;}
      //printf("%c\n",b[i]);}
      //  printf("%d\n",sum);
        a=sum/9;
        s=9*(a+1)-sum;
        d=sum-a*9;
        if(s<d)
        printf("%d\n",s);
        else
        printf("%d\n",d);
    }
    
  return 0;  
    
}