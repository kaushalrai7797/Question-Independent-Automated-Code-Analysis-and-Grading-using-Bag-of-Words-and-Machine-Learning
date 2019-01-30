
#include <stdio.h>


int main()
{
 int test,b,n,a,i,v,s,flag=0;
 char k[1000];
   
    scanf("%d",&test);
    while(test--)
    {
        flag=0;
        scanf("%d",&n);
         v=s=0;
       for(i=0;i<n;i++)
       {
          
           scanf("%s",k);
           if((k[strlen(k)-3]=='m' && k[strlen(k)-2]=='a' &&k[strlen(k)-1]=='n' )||
              (k[strlen(k)-5]=='w' && k[strlen(k)-4]=='o' &&k[strlen(k)-3]=='m' && k[strlen(k)-2]=='a' &&k[strlen(k)-1]=='n' ))
              {
                  s++;
              }else{
                  v++;
              }
              if(s==v+2 && flag==0)
              {
                  flag=1;
              }else{
                  if(s+3==v && flag==0)
                  {
                      flag=2;
                  }
              }
       }
       if(flag==1)
       {
           printf("superheroes\n");
       }else{
           if(flag==2)
           {
               printf("villains\n");
           }else{
               printf("draw\n");
           }
       }
        
        
        
    }
    
     
  
    
   
  
   
    return 0;
}
