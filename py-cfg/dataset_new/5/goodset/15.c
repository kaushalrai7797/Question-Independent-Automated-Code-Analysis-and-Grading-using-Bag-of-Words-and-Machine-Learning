#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,t,guu;
    
    
       scanf("%lf%lf%lf",&a,&b,&c);
       t=(-b+sqrt(b*b-4*a*c))/(2*a);
       guu=(-b-sqrt(b*b-4*a*c))/(2*a);
       
       
       
       
       
        printf("%lf\n",t);
    printf("%lf\n",guu);
    
    

    
    return 0;
}

