#include <stdio.h>

int main()
{
  int array[5000], n,t, c, d, swap,min;
  scanf("%d",&t);
  while(t>0)
  {
  	if(t>10||t<0)
  	break;
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
  min=array[1]-array[0];


  for(c=1;c<n-1;c++)
  {
  	if(min>(array[c+1]-array[c]))
  	min=(array[c+1]-array[c]);
  }
  printf("\n%d",min);
  t--;
}
}
