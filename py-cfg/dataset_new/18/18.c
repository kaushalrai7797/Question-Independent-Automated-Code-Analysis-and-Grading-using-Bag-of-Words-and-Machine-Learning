#include <stdio.h>
int main()
{
 int t;
 long int n,q,a[100000],b[100000],i,j,s;
 scanf("%d",&t);
 while(t--)
 {s=1;
     scanf("%ld %ld",&n,&q);
     for(i=0;i<n;i++)
     {
         scanf("%ld",&a[i]);
         s=s*a[i];
     }
     for(i=0;i<q;i++)
     {scanf("%ld",&b[i]);
       printf("%ld ",(b[i]/s));
     }
       printf("\n");
 }
 return 0;
}

