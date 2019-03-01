#include<stdio.h>
#include<math.h>

  int main()
  {
    int i ;
    scanf("%d",&i);
    while(i--)
    {
      float S,SG,FG,D,T;
      float O,R;

      scanf("%f%f%f%f%f",&S,&SG,&FG,&D,&T);
       O=(180*D)/T;
       R=S+O;

      if(abs(SG-R) < abs(FG-R))
         {
             printf("SEBI \n");
         }
      else if(abs(SG-R) > abs(FG-R))
          {
          printf("FATHER \n");
          }
      else
          {
          printf("DRAW \n");
          }
    }
    return 0;
  }
