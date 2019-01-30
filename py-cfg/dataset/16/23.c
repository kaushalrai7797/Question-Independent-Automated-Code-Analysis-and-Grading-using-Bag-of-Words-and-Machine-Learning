
#include<stdio.h>
int main()
{
    int n,Q,i,j,max,c,x,swap,p,s=0;int a1=0;
    scanf("%d",&n);int a[n],s1[n];s1[n]=0;
    
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   scanf("%d",&Q);int k[Q];
    /*for(i=0;i<Q;i++)
    {
    scanf("%d",&k[i]);
    }*/
    
    for(i=n-1;i>0;i--)
    { max=a[i];c=i; swap=a[i];
        for(j=0;j<=i;j++)
        {
            
        if(a[j]>max)    
          {max=a[j];c=j;  
          }  
            
        }
        if(c!=i)
        {a[i]=max;
            a[c]=swap;
            
        }
        a1=a1+a[i];
        s1[i]=a1;
    }
    a1=a1+a[0];
    s1[0]=a1;
    for(i=0;i<Q;i++)
    {scanf("%d",&k[i]);
    max=k[i];
   x=n/(max+1);p=n-x*(max+1);
   s=a1-s1[x+p];
   
 /* for(j=0;j<x+p;j++)
  {
      s=s+a[j];
  }
 /* for(j=x;j<x+p;j++)
  {
      s=s+a[j];
  }*/
    printf("%d\n",s);
    s=0;
    }
    
    
    
    
    
    
    
    
    return 0;
}