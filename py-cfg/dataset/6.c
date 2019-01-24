#include <stdio.h>
int calculate(int h[], int n, int k)
{
    int m = 0;
    for(int c = 0; c < n; c++)
        for(int cs = h[c]; cs + k < h[c+1]; cs += k, m++);
    return m;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int a = 0; a < t; a++)
    {
        int h[129], n, k;
        scanf("%d %d",&n,&k);
        h[0] = 0;
        for(int b = 1; b <= n; b++) scanf("%d",&h[b]);
        printf("%d\n",calculate(h,n,k));
    }
    return 0;
}