#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t1;
    scanf("%d",&t1);
    while(t1--)
    {
        double s,sg,fg,d,t,d1,d2;
        scanf("%lf %lf %lf %lf %lf",&s,&sg,&fg,&d,&t);
        double rs=s+((d*180.0)/t);
        d1=sg-rs;
        d2=fg-rs;
        if(abs(d1)>abs(d2))
         {
      	printf("FATHER\n");
      }
      else if(abs(d2)>abs(d1))
      {
      	printf("SEBI\n");
      }
      else if(abs(d1)==abs(d2))
      {
      	printf("DRAW\n");
      }


    }
}
