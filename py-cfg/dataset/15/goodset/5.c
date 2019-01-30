#include<stdio.h>
 
int main()
{
    int test;
    scanf("%d",&test);
    int i,j,k;
    double p;
    int t=test;
    int a[105][3];
    double low,high,mid;
    double value[105];
    double out;
    int n;
    double flag=1;
    int incr=1;
   
    while( t-- >= 1)
    {
           scanf("\n");
      
           scanf("%d",&n);
           i=0;
           while(i<n)
           {
                     scanf("%d",&a[i][0]);
                     if(a[i][0]!=0)
                     scanf("%d %d",&a[i][1],&a[i][2]);
                     i++;
           }
                     low=0.0;
                     high=1.0;
                        
                               
                             mid=(high+low)/2;
                               p=mid;
                                  
                         int trn=80;      
                               
                     while(trn-- )
                     {
                        
                              
                        
                               j=0;
                               while(j<n)
                               {
                                         if(a[j][0]==0)
                                         {
                                                       value[j]=p;
                                         }
                                         else if(a[j][0]==1)
                                         {
                                              value[j]=1-(1-value[a[j][1]-1])*(1-value[a[j][2]-1]);
                                         }
                                         else if(a[j][0]==2)
                                         {
                                             value[j]=value[a[j][1]-1]*value[a[j][2]-1];
                                         }
                                                                              j++;
                               }
                               out=value[n-1];
                               if(out==(0.5))
                               {
                                    
                                           break;
                               }
                            if(out<0.5)                               
                               {
                                    low=p;
                                    p=(high+low)/2;
                               }
                               else
                               {
                                   high=p;
                                   p=(low+high)/2;
                               }
                             
                     }
                     printf("%.5lf\n",p);

                     
           
    }
    scanf("%d",&i);
    return 0;
    }