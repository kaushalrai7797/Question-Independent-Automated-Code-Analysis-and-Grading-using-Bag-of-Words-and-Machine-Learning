#include <stdio.h>
main()
 {
 float x,bl;
 int y;
 scanf("%f%d",&x,&y);
 if(y%5==0&& ((float)y+0.5)<=x)
 {
     bl=x-(float)y-0.5;
	printf("balance=%.2f",bl);
}
else
{
    printf("balance=%.2f",x);
}
}

