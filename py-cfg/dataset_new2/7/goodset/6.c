#include <stdio.h>

int min [31], max [31];

int main ()
{
	min [1] = max [1] = 2;
	int i, T, N, M;
	for ( i = 2; i <= 30; i++)	{
		max [i] = i + 1 + max [i - 1];
		min [i] = i + 1 + min [i / 2] + min [i - i / 2 - 1];
	}
	scanf ( "%d", & T);
	while ( T--)	{
		scanf ( "%d%d", & N, & M);
		if ( M < min [N])
			printf ( "-1\n");
		else if ( M <= max [N])
			printf ( "0\n");
		else
			printf ( "%d\n", M - max [N]);
	}
	return 0;
}
