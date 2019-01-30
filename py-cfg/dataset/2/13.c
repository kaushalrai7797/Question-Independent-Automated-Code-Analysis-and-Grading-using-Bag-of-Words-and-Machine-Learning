#include <stdio.h>
#include<string.h>

/*char stack[1000000];
int top=-1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}*/
int main(void) {
	// your code goes here
	int t,i,j;
	long long countmax,count,lf,rf;
	char exp[1000000];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{   count=0;
	    countmax=0;
	    lf=0;
	    rf=0;
	    scanf("%s",exp);
	    for(j=0;j<strlen(exp);j++)
	    {
	       if(exp[j]=='<')
	       {
	           lf++;
	       }
	       else if(exp[j]=='>'&&lf>rf)
	       {
	           rf++;
	           count=count+2;
	           if(lf==rf)
	           {
	               countmax = count;
	               count = 0;
	           }
	       }
	       else if(lf>rf)
	       {
	           count++;
	           
	       }
	      
	       
	    }
	    
	    printf("%ld\n",countmax);
	}
	return 0;
}

