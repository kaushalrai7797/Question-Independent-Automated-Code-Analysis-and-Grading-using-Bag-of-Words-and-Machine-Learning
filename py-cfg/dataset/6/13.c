#include<stdio.h>
  
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {  int a,b,k,count=0,h=0;
        scanf("%d %d %d",&a,&b,&k);
    
    int prime[100001]={0};
    //int e[10001],t[10001];
    //memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=b; p++) 
    { 
        
        if (prime[p] == 0) 
        { 
            
            for (int i=p*2; i<=b; i += p) 
                prime[i] = 1; 
        } 
    }
    /*for(int j=2;j<=b;j++)
    if(prime[j]==0)
    {e[r]=j;
    r++;}
    else
    {t[y]=p;
    y++;}
    if(prime[a]==0)&&prime[b]==0)
    z=*/
    
    
  
  for(int f=a;f<=b;f++)
  {
    for (int p=2; p<=f/2; p++) 
     {    if(prime[p]==0)
     {
         if(f%p==0)
              count++;}
     }
         if(prime[f]==0)
     count++;
  
              if(count==k)
             { h++;
              count=0;}
              else
              count=0;
  }        
  
     
printf("%d\n",h);}
     
    
    
    
    
 return 0; 
    
}
