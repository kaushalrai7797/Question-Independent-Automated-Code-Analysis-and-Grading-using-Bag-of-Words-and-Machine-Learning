#include<stdio.h>
int main()
{
  long long int a,b,c,d,k=0,i,j;
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int flag=0;
     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
     if(d<a&&d<b) {printf("0\n");flag=1;}
     else
     {


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
     }
    if(flag==0){printf("%lld\n",k);}
   k=0;
  }
    return 0;
}
