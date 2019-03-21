#include <stdio.h>

int main(void) {
    int t;
    long int diff=1000000000;
    scanf("%d",&t);
    for(int i=1;i<=t&&t<=10;i++)
    {
        int n,a=0;
        scanf("%d",&n);
        long int s[n];
        for(int j=0;j<n;j++)
        {
            scanf("%ld",&s[j]);
        }
        for (int c= 0; c< n;c++)
        {

            for (int d = c + 1; d< n;d++)
            {

                if (s[c] > s[d])
                {

                    a =s[c];
                    s[c] = s[d];
                    s[d] = a;

                }

            }

        }

            for (int m=1; m<n;m++)
              {  if(s[m]-s[m-1]<diff)
                    { diff=s[m]-s[m-1];
                    }
              }
                    printf("%ld",diff);
    }
	// your code goes here
	return 0;
}
