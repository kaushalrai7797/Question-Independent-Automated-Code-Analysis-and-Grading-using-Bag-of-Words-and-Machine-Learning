#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(n=0;n<t;n++)
    {
        int  p,a,b,i,k,l;
        scanf("%d %d",&a,&b);
        p=a-b; 
        k=p%10;
        l=p/10;
        if (k==1)
        {
            printf("%d",(l*10)+2);
            
        }
        else if (k!=1)
        {
            printf("%d",(l*10)+1);
        }
        
    }
        
}