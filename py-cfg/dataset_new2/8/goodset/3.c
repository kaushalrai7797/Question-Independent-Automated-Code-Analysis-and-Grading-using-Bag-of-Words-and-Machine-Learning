#include <stdio.h>

int main(void) {
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int s[n],diff=0;
        for(int j=0;j<n;j++)
        {
            scanf("%ld",&s[j]);
        }

        for (int c= 0; c< n;c++)
        {
            long int a=0;
            for (int d = c + 1; d<n;d++)
            {

                if(s[c]>s[d])
                {

                    a =s[c];
                    s[c] = s[d];
                    s[d] = a;

                }

            }

        }
        diff=s[1]-s[0];
            for (int m=1; m<n-2;m++)
              {

                  if(s[m+1]-s[m]<diff)
                    { diff=s[m+1]-s[m];
                    }
              }
                    printf("%ld\n",diff);
    }
	// your code goes here
	return 0;
}
