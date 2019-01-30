#include <stdio.h>
#include<string.h>

char stack[1000000];
int top=-1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}
int main(void) {
	// your code goes here
	int t,i,j,count;
	char exp[1000000];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{   count=0;
	    top=-1;
	    scanf("%s",exp);
	    for(j=0;j<strlen(exp);j++)
	    {
	       if(exp[j]=='<')
	       {
	           push('<');
	       }
	       else if(exp[j]=='>'&&stack[top]=='<')
	       {
	           pop();
	           count=count+2;
	       }
	       
	    }
	    
	    printf("%d\n",count);
	}
	return 0;
}

