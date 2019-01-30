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
	        {
	            count++;
	            for(int k=j+1;k<len;k++)
	            {
	                if(string[k]=='1')
	                count++;
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

