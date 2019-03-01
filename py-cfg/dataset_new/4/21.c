#include<stdio.h>
int main()
{
  long long int a,b,c,d,k=0;
  int t,i,j; 
  scanf("%d",&t);
  while(t--)
  {  
     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
     for(i=a;i<=b;i++)
      {
            for(j=c;j<=d;j++)
            {   
                
       
                 if(i<c)
                  {  k=k+(d-c+1); 
                    break;}
                 else if(i>=c)
                   {  k=k+(d-i);
                      break;}
              }
        }
   printf("%lld/n",k);
   k=0;
  }
    return 0;
 }
