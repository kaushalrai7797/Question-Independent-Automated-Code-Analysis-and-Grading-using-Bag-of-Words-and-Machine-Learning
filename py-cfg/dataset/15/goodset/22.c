#include <stdio.h>

int main()
{
  int n1, n2, i, j;
  int op[101], p1[101], p2[101];
  float x[101], a, b, m;
  for( scanf("%d",&n1), i = 0; i < n1; ++i )
  {
  	scanf("%d",&n2);
  	for( j = 0; j < n2; ++j ) if( scanf("%d",op+j) && op[j] && scanf("%d %d", p1+j, p2+j ) ){--p1[j];--p2[j];}
	a = 0; b = 1; m = 0.5;
	for( ;b-a > 1e-7; m = (a+b)/2 )
	for( j = 0; j < n2 || ( (x[n2-1] > 0.5 ? (b = m):(a = m)) && 0); x[j] = op[j] ? op[j]==2? x[p1[j]]*x[p2[j]] : x[p1[j]]*(1-x[p2[j]])+x[p2[j]] : m, ++j );
  	printf("%0.5lf\n", m );
  }
}