#include<stdio.h>
#include<string.h>
 
char str[50010];
int main(void) {
	int t;
	scanf("%d\n",&t);
	int l1,l2;
	char *s1,*s2,*tmp;
	while(t--)
	{	
		gets(str);
		s1=str;
		s2=strchr(str,32);
		*s2=0;
		*s2++;
		l1=strlen(s1);
		l2=strlen(s2);
		if(l1>l2)
		{	tmp=s1;
			s1=s2;
			s2=tmp;
		}
		while(*s1&&*s2)
		{
			if(*s1==*s2)s1++;
			s2++;
		}
		if(*s1)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}