#include <stdio.h>

int min(int x,int y)
{
  if(x%y==0)
  return y;
  else
  return min(y,x%y);
}
int main()
{
  int t;
  scanf("%d",&t);
while(t>0)
  {
    int m,b,k;
    scanf("%d %d",&m,&b);
  k=min(m,b);
    printf("%d\n",2*k);
    t--;
  }
	return 0;
}

