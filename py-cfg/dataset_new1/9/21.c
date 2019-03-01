#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    int t;
    scanf(" %d",&t);
    while(t--){
         float s, sg, fg, d, t, o, a, b;
         scanf(" %f%f%f%f%f",&s,&sg,&fg,&d,&t);
         o=s+((d*180)/t);
        if(o>sg){
            a=o-sg;
        }else{
            a=sg-o;
        }
        if(o>fg){
            b=o-fg;
        }else{
            b=fg-o;
        }
         if( a>b){
            printf("FATHER\n");
         }else if(b<a){
            printf("SEBI\n");
         }else{
            printf("DRAW\n");
         }


    }
    return 0;
}

