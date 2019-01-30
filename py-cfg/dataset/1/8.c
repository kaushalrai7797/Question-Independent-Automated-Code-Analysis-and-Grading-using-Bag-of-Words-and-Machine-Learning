#include <stdio.h>

#define N 1000000007

long long buckets[750001];
long long A[750001];

int main()
{
  int t;
  long long n;
  scanf("%d", &t);
  int i;
  while (t--)
  {
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
      scanf("%lld", &A[i]);
      buckets[A[i]] = 1;
    }

    long long p, j;
    for (i = 0; i < n; i++)
    {
      p = A[i];
      for (j = 2 * p; j < 750001; j += p)
        buckets[j] = (buckets[j] + buckets[p]) % N;
    }

    long long sum = 0;
    for (i = 0; i < n; i++)
      sum = (sum + buckets[A[i]]) % N;
    printf("%lld\n", sum);
  }

  return 0;
}
