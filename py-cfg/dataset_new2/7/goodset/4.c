#include<stdio.h>

int mini[2];
int minValue(int x)
{
	if (x == 1)
		return mini[0];
	else if (x == 2)
		return mini[1];
	else
		return x + 1 + minValue(x / 2) + minValue((x - 1) / 2);
}
int main()
{
	int n, m, t,max,min;
	mini[0] = 2;
	mini[1] = 5;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &n, &m);
		max = n + (n*(n + 1)) / 2;
		min = minValue(n);
		if (m >= min)
		{
			if (m <= max)
				printf("0\n");
			else
				printf("%d\n", m - max);
		}
		else
			printf("-1\n");
	}
	return 0;
}
