#include <stdio.h> 
#include <math.h> 
int main ()
{
  int t;
  scanf ("%d", &t);
  while (t--)
    {
      int n, i, count1 = 0, count2 = 0;
      scanf ("%d", &n);
      int a[n], g[n];
      for (i = 0; i < n; i++)
	scanf ("%d", &a[i]);
      for (i = 0; i < n; i++)
	scanf ("%d", &g[i]);
      for (i = 0; i < n; i++)
	{
	  if (a[i] <= g[i])
	    count1++;
	}
      for (i = 0; i < n; i++)
	{
	  if (a[i] <= g[n - 1 - i])
	    count2++;
	}
      if (count1 == n && count2 == n)
	printf ("both\n");
      else if (count1 == n)
	printf ("front\n");
      else if (count2 == n)
	printf ("back\n");
      else
	printf ("none\n");
    }
  return 0;
}