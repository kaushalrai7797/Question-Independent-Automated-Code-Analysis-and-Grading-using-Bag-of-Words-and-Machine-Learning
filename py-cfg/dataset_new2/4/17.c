#include <stdio.h>

long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
int main()
{
  int t;
  scanf( "%d", &t);

  while( t-- )
  {
    int a,b;
    scanf( "%d%d", &a, &b);

    if( a<b )
      printf("1\n");
    else
      printf( "%d\n", ncr( a-1, b-1));
  }

  return 0;
}
