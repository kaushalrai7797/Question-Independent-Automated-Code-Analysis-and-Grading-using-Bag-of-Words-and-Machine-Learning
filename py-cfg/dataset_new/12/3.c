#include<stdio.h>
typedef struct chef{
    int lenseq;
    int seq[100];
    int f;
    int fseq[100];
}chef;
int main()
{
  chef a[20];
  int t,d,c,i,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&a[i].lenseq);
        d=a[i].lenseq;
        for(j=0;j<d;j++)
        scanf("%d ",&a[i].seq[j]);
        scanf("\n%d\n",&a[i].f);
        d=a[i].f;
        for(j=0;j<d;j++)
        scanf(" %d",&a[i].fseq[j]);
    }
    
    for(i=0;i<t;i++)
    {  d=0;
        c=0;
        while(c<a[i].f)
        { 
            for(j=0;j<a[i].lenseq;j++) 
  {
       if(a[i].seq[j]==a[i].fseq[c])
           {   
                d++;   
                break;
           }
              
        }
            c++;
        }
        
        if(d==a[i].f)
        printf("Yes");
        else printf("No");
        }
}