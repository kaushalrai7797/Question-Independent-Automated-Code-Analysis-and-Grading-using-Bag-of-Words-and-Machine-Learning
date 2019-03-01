#include <stdio.h>

int main(void) {
 int x;
float y;

scanf("%d",&x);
scanf("%f",&y);
if(x%5!=0)
{
    printf("%.2f",y);
    
}
else if(x>=(y+0.5))
{ printf("%.2f",y);}
 else 
 {
     y=y-(float)x-0.5;
     printf("%.2f",y);
 }



	return 0;
}

