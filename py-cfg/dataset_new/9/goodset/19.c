#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{ double s,sg,fg,d,t1;
      scanf("%lf %lf %lf %lf %lf",&s,&sg,&fg,&d,&t1);
      double sp=s+((d*50)/t1)*18/5;
      double d1=sg-sp;
      double d2=fg-sp;
      if(d1<0)
      {
      	d1=-d1;
      }
      if(d2<0)
      {
      	d2=-d2;
      }
      if(d1>d2)
      {
      	printf("FATHER\n");
      }
      else if(d2>d1)
      {
      	printf("SEBI\n");
      } 
      else if(d1==d2)
      {
      	printf("DRAW\n");
      }
	}return 0;
}