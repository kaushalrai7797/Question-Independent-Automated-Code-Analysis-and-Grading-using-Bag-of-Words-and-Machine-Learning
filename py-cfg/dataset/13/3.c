#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char string[n];
	    scanf("%s",string);
	    int count=0;
	    for(int j=0,len=strlen(string);j<len;j++)
	    {
	        if(string[j]=='1')
	        count++;
	    }
	    int sum=0;
	    while(count>0)
	    {
	        sum+=count;
	        count--;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

