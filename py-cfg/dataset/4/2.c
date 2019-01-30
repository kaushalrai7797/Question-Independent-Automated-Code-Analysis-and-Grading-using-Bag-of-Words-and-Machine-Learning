
#include <stdio.h>


int main()
{
 int test,b,n,a,i,v,s;
 char k[1000];
   
    scanf("%d",&test);
    while(test--)
    {
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
       }
       if(s>v)
       {
           printf("superheroes\n");
       }else{
           if(s<v)
           {
               printf("villains\n");
           }else{
               printf("draw\n");
           }
       }
        
        
        
    }
    
     
  
    
   
  
   
    return 0;
}
