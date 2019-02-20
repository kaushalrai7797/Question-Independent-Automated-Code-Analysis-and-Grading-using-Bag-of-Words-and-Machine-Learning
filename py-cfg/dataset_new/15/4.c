#include <stdio.h>
#include <stdlib.h>
int readInt () 
{
	int result = 0;
	char ch;
	int neg = 0;
	ch = getchar();
	while(ch < '0' || ch > '9')
	{
	    if(ch == '-')   neg = 1;
	    ch = getchar();
	}
	while (ch >= '0' && ch <= '9') 
    {
		result = result * 10 + (ch - '0');
		ch = getchar();
	}
	if(neg) result *= -1;
	return result;
}
int main(void)
{
    int T;
    T = readInt();
    while(T--)
    {
        int N, o=1,f=1,b=1;
        N = readInt(); 
        int L[N], G[N];
        for(int i=0; i<N; i++)L[i] = readInt();
        for(int i=0; i<N; i++)G[i] = readInt();
        for(int i=0; i<N; i++)
        {
            if(G[i] < L[i])
            {
                f = 0, o = 0;
                break;
            }
        }
        for(int i=0; i<N; i++)
        {
            if(G[N-i-1] < L[i])
            {
                o = 0, b = 0;
                break;
            }
        }
        if(o)printf("both\n");
        else if (f) printf("front\n");
        else if (b) printf("back\n");
        else printf("none\n");
    }
	return 0;
}

