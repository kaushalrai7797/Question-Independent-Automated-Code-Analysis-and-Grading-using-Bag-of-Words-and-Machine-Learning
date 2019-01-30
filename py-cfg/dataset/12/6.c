#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	struct word
	{
		char string[21];
		int Time;
	};
	//struct word strings[100];
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		int N;
		scanf("%d",&N);
		struct word strings[N];
		int t=0;
		for(int j=0;j<N;j++)
		{
			strings[j].Time = 2;
			scanf("%s",strings[j].string);
			int k=0; t = t+2;
			int m=1;
			int l;
			for(l=0;l<j;l++)
			{
				m = strcmp(strings[j].string,strings[l].string);
				if(m==0)
				break;
			}
			if(m==0)
			{
				t = t + (strings[l].Time)/2 -2;
			}
			else
			{
				while(strings[j].string[k] !='\0')
				{
					if(strings[j].string[k]=='d' || strings[j].string[k]=='f')
					{
						if(strings[j].string[k+1] == 'd' || strings[j].string[k+1]=='f')
						{
							strings[j].Time = strings[j].Time + 4;
							t = t+4;
						}
						if(strings[j].string[k+1]== 'j' || strings[j].string[k+1]=='k')
						{
							strings[j].Time = strings[j].Time + 2;
							t = t+2;
						}
					}
					if(strings[j].string[k]=='j' || strings[j].string[k]=='k')
					{
						if(strings[j].string[k+1] == 'd' || strings[j].string[k+1]=='f')
						{
							strings[j].Time = strings[j].Time + 2;
							t = t+2;
						}
						if(strings[j].string[k+1]== 'j' || strings[j].string[k+1]=='k')
						{
							strings[j].Time = strings[j].Time + 4;
							t = t+4;
						}
					}
					k++;
				}
			}
		}
		printf("%d",t);
	}
}