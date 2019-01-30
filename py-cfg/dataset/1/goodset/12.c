#include <stdio.h>

#define MOD 1000000007
#define SIZE 750000

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        unsigned int n;
        scanf("%d",&n);
        int set[SIZE];
        int prev_set[SIZE];
        for (int i = 0;i<SIZE;++i)
        {
            set[i] = 0;
            prev_set[i] = 0;
        }
        int max = -1;
        int min = SIZE + 1;
        for (int i = 0;i<n;++i)
        {
            int x;
            scanf("%d",&x);
            set[x-1] = 1;
            if (x > max)
            {
                max = x;
            }
            if (x < min)
            {
                min = x;
            }
        }
        long count = n;
        for (int size = max;size > 0;size/=2)
        {
            for(int i = min;i<=(size/2);i++)
            {
                
                if (set[i-1])               
                {
                    prev_set[i-1] = set[i-1];
                    for(int j = i + i;j<=size;j+=i)
                    {
                        set[i-1] += set[j-1] - prev_set[j-1];
                        count += set[j-1] - prev_set[j-1];
                        count = count % MOD;
                    }
                }
            }
        }
        printf("%ld\n",count % MOD);
    }
    return 0;
}
