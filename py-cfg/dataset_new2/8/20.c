#include <stdio.h>

int main(void) {
	// your code goes here
	//int skill[1000000001];
	int horses[5000];
	int t, n, s;
	int i, j, f1, f2;
	scanf("%d", &t);
	for(i = 0;i<t;i++)
	{
	    scanf("%d", &n);
	    for(j = 0;j<n;j++)
	    {
	        scanf("%d", &s);
	        horses[j] = s;
	    }
	    f1 = 1000000000; f2 = 1000000000;
	    int pos;
	    for(j = 0;j<n;j++){
	        if(f1>horses[j])
	        {
	            f1 = horses[j];
	            pos = j;
	        }
	    }
	    for(j = 0;j<n;j++){
	        if(f2>horses[j] && j!=pos)
	        {
	            f2 = horses[j];
	        }
	    }
	    printf("%d\n", f2-f1);
	}
	return 0;
}
