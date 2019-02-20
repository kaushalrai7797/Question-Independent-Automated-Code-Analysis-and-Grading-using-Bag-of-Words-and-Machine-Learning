
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int leapdays,normaldays,yr,day,totaldays;
    scanf("%d",&yr);
    normaldays=(yr-1)*365;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    totaldays=normaldays+leapdays;
    day=totaldays%7;
    if(day==0)
       printf("monday\n");
    else if(day==1)
       printf("tuesday\n");
    else if(day==2)
       printf("wednesday\n");
    else if(day==3)
       printf("thursday\n");
    else if(day==4)
       printf("friday\n");
    else if(day==5)
       printf("saturday\n");
    else
       printf("sunday\n");
  
  }
  return 0;
}
