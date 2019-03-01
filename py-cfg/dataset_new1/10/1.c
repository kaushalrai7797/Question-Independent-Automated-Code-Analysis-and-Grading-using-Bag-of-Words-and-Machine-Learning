#include  <stdio.h>
#include <string.h>



int main()
{  long long int i,j,k,T,s,m,d,N,K;
    char c,c1;
    scanf("%lld\n",&T);
  
   for(i=1;i<=T;i++)
   { s=m=0;
      for(j=1;;j++)
     {scanf("%c",&c);
      if(c=='\n')
       break;
      else
      { 
        if(c=='s')
        {s=s+1;
         if(j>1 && c1=='m' && d!=(j-1))
         {s=s-1;
          d=j-1;
         } 
        } 
        else
        { m=m+1;
          if(j>1)
          { if(c1=='s' && d!=j)
            {s=s-1;
             d=j;}
          } 
        }
        c1=c;  
      }
     }
     if(s==m)
     printf("tie\n");
     else if(s>m)
     printf("snakes\n");
     else
     printf("mongooses\n");    
    
   } 
    
 return 0;
} 
         
