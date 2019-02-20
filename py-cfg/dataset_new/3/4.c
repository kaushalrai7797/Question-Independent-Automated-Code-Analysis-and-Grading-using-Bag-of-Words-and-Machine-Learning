#include <stdio.h>
#include<stdlib.h>
int main() 
{
  int plyr1[1000000], plyr2[1000000];
  int i, round, p_diff[1000000],p;
 // int count1=0, count2=0, lead;
  int highest;
  scanf("%d",&round);
  for (i = 0; i < round; ++i)
  {
    scanf("%d",&plyr1[i]);
    scanf("%d",&plyr2[i]);
  }
    for (int i = 0; i < round; ++i)
          {
            p_diff[i]=abs(plyr1[i]-plyr2[i]);
          } 
        highest=p_diff[0];

  for (int i = 0; i < round; ++i)
   {
     
     if (highest<p_diff[i])
     {
       highest=p_diff[i];
       p=i;
     }
   }
   if (plyr1[p]>=plyr2[p])
   {
     printf("1 %d\n",highest);
   }
   else
    printf("2 %d\n",highest);

  /* for (int i = 0; i < round; ++i)
   {
     lowest=p_diff[0];
     if (lowest>p_diff[i])
     {
       lowest=p_diff[i];
     }
   }*/
   /*for (int i = 0; i < round; ++i)
     {
       if (p_diff[i]>0)
       {
         count1++;
       }
       else
         count2++;
     } */
    /*for (int i = 0; i < round; ++i)
      {
        
         if (p_diff[i]==highest && plyr1[i]>plyr2[i])
        
        {  
            printf("1 %d", highest);
            break;
        }
        
        else
            printf("2 %d", highest); 
            break;
  
      }*/
  
      
  return 0;
}