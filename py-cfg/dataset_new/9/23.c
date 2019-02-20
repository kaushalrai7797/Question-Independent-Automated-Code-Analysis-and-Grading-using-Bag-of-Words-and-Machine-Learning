#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int t;
    scanf(" %d",&t);
    while(t--){
         float s, sg, fg, d, t, o;
         scanf(" %f%f%f%f%f",&s,&sg,&fg,&d,&t);
         o=s+((d*180)/t);
       
         if(abs(o-sg) > abs(o-fg)){
            printf("FATHER\n");
         }else if(abs(o-sg) == abs(o-fg)){
            printf("DRAW\n");
         }else{
            printf("SEBI\n");
         }


    }
    return 0;
}

