#include<stdio.h>
char check[30];
char c[30];
int top=-1;
int expression(int n);
int Are_pair(char ,char);
int main(){
	int t;
	int l,q;
	scanf("%d",&t);
	while(t>0)
	{ t--;
	scanf("%s",c);
	for(l=0;c[l]!='\0';l++);
	q=expression(l);
	if(q==1)
	{
	
	 printf("\n%d",l);
   }      
	if(q==0)
	{
		printf("\n0");
	}
	}
}
int expression(int n)
{  int i,f;
  for(i=0;i<n;i++)
  { 
    if(c[i]=='<')
    { top=top+1;
      check[top]=c[i];
	}
    if(c[i]=='>')
  {  
            f=c[i];  
  	if(Are_pair( check[top], f)==0){
  		return 0;
	  }
	  if(Are_pair( check[top], f)==1)
	  {
	  	top=top-1;
	  }
   }
  }
  if(top==-1)
  { return 1;

  }
  else
  {
  	return 0;
  }
  }
int Are_pair(char q,char w)
{
	if(q=='<'&&w=='>')
	{return 1;
	}
	else 
	{
		return 0;
	}
	}
	