#include <stdio.h>
#include<math.h>
int main(void) 
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   int year;
        scanf("%d",&year);
        int l=year-2001;
        
        if(l>0)
        {
            if(l%7==0)
            printf("monday\n");
            else if(l%7==1)
             printf("tuesday\n");
             else if(l%7==2)
             printf("wednesday\n");
             else if(l%7==3)
              printf("thursday\n");
              else if(l%7==4)
               printf("friday\n");
               else if(l%7==5)
                printf("saturday\n");
                else if(l%7==6)
                printf("sunday\n");
        }
      else  if(l<0)
        {
          if(abs(l)%7==0)
            printf("monday\n");
        else if(abs(l)%7==1)
            printf("sunday\n");
        else if(abs(l)%7==2)
            printf("saturday\n");
            else if(abs(l)%7==3)
            printf("friday\n");
            else if(abs(l)%7==4)
                printf("thusday\n");
                else if(abs(l)%7==5)
                printf("wednesday\n");
                else if(abs(l)%7==6)
                printf("tuesday\n");
      
        }
    }
	return 0;
}

