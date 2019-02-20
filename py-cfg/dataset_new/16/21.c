#include <stdio.h>
int fact(int b);
int main() {
    int t,a[100],i,r;

    scanf("%d",&t);
    
     for(i=0;i<=t;i++)
     {scanf("%d",&a[i]);
     }
    
    for (i=0;i<t;i++)
    {r=fact(a[i]);
    printf("%d",r);
    return 0;
     
    }
}
int fact(int b)
{if (b==0)
return 1;
else return b*fact(b-1);
}
    

