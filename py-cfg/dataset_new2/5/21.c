
#include <stdio.h>



int main()
{
    int i,j,k,l=0,t,n;
    char tag[1000000];

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%s",tag);

        for(n=0;tag[n]!='\0';n++);

        for(k=0;k<(float)n/2;k++){
            if(tag[k]!=tag[n-1-k]){l=1;
                            break;}
                                 }
        if(l==0){
                    if(n%2==1)
                    { tag[n/2]++;
                        printf("%s\n",tag);
                        continue;

                    }
                    else {
                        tag[n/2]++;
                        tag[n/2-1]++;
                        printf("%s",tag);
                        continue;
                         }
                }

            for(j=0;j<n/2;j++)
        {
            if(tag[j]>=tag[n-1-j])
            {tag[n-1-j]=tag[j];

            }
            else {
                tag[n-1-j]=tag[j];

                tag[n-2-j]++;
                if((j==n/2-1)&&(n%2==0))
                    tag[n-1-j]=tag[j];
                 }
        }

        printf("%s",tag);
    }

    return 0;
}
