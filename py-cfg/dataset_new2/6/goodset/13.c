#include<stdio.h>
#include<math.h>

int main()
{	int t, n, k, i, a, b, temp, aCount, bCount, count;
	scanf("%d", &t);
	while(t--)
	{	scanf("%d%d%d", &n, &k, &a);
		b = -1, aCount = 1, bCount = 0, count = 1;
		for(i=0 ; i<n-1 ; i++)
		{	scanf("%d", &temp);
			count++;
			if((abs(temp-a)) % (k+1) != 0)
			{	if(b == -1)
				{	b = temp;
					bCount++;
				}
				else if(abs(temp-b) % (k+1) != 0)
					break;
				else
					bCount++;
			}
			else
				aCount++;
			if(aCount>1 && bCount>1)
				break;
		}
		if(i != n-1)
			printf("NO\n");
		else
			printf("YES\n");

		for(i=count ; i<n ; i++)
			scanf("%d", &temp);
	}
	return 0;
}
