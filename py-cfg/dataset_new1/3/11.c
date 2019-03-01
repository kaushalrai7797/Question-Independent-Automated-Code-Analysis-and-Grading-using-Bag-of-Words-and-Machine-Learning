#include <stdio.h>
#define max 20
int main() 
{
  int plyr1[max], plyr2[max];
  int i, round, p_diff[max];
 // int count1=0, count2=0, lead;
  int highest, lowest;
  scanf("%d", &round);
  for (i = 0; i < round; ++i)
  {
    scanf("%d",&plyr1[i]);
    scanf("%d",&plyr2[i]);
  }
    for (int i = 0; i < round; ++i)
          {
            p_diff[i]=abs(plyr1[i]-plyr2[i]);
          } 
 { for (int i = 0; i < round; ++i)
   {
     highest=p_diff[0];
     if (highest<p_diff[i])
     {
       highest=p_diff[i];
     }
   }

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
    for (int i = 0; i < round; ++i)
      {
        if (p_diff[i]=highest && plyr1[i]>plyr2[i])
        {
           printf("1 %d", highest);
           break;
        }
        else
            printf("2 %d", highest); 
            break;
  
      }
  }
      
	return 0;
}

