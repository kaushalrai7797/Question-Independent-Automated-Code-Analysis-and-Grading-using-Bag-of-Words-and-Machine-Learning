#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int num;
              scanf("%d",&num);
              int arr[num][3];
              float val[num];
              int i,j;
              float low=0,high=1.0,mid=(low+high)/2;
              
              for(i=0;i<num;i++)
              {
                                scanf("%d",&arr[i][0]);
                                
                                if(arr[i][0]!=0)
                                {
                                scanf("%d",&arr[i][1]);
                                scanf("%d",&arr[i][2]);
                                }
              }
              
             for(j=0;j<80;j++)
              {
                                for(i=0;i<num;i++)
                                {
                                                 
                                                 
                                                  if(arr[i][0]==0)
                                                  val[i]=mid;
                                                  else if(arr[i][0]==1)
                                                  {
                                                       
                                                        float p1,p2;
                                                  p1=val[arr[i][1]-1];
                                                  p2=val[arr[i][2]-1];
                                                  val[i]=p1*p2+(1-p1)*p2+(1-p2)*p1;
                                                  }
                                                  else
                                                  {
                                                           float p1,p2;
                                                  p1=val[arr[i][1]-1];
                                                  p2=val[arr[i][2]-1];
                                                  val[i]=p1*p2;
                                                  }
                                }
                                if(val[num-1]==0.5)
                                break;
                                else if(val[num-1]>0.5)
                                {
                                     high=mid;
                                     mid=(low+high)/2;
                                 }
                                else
                                {
                                     low=mid;
                                     mid=(low+high)/2;
                                    }
                                }
              printf("%.5f\n",mid);
              }
              return 0;
    
}