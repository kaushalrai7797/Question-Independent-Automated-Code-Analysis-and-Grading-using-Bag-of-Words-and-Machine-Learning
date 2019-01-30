#include<stdio.h>
#include<string.h>
char check[5000001];
char c[5000001];
long long int top=-1;
int expression(long long int n);
int Arepair(char ,char);
int main(){
	int t,q;
	long long int l;
	scanf("%d",&t);
	while(t>0)
	{ t--;
	scanf("%s",c);
	l=strlen(c);
	q=expression(l);
	if(q==1)
	{
	
	 printf("%d\n",l);
   }      
	if(q==0)
	{
		printf("0\n");
	}
	}
}
int expression(long long int n)
{  long long int i,f;
  for(i=0;i<n;i++)
  { 
    if(c[i]=='<')
    { top=top+1;
      check[top]=c[i];
	}
    if(c[i]=='>')
  {  
            f=c[i];  
  	if(Arepair( check[top], f)==0){
  		return 0;
	  }
	  if(Arepair( check[top], f)==1)
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
int Arepair(char q,char w)
{
	if(q=='<'&&w=='>')
	{return 1;
	}
	else 
	{
		return 0;
	}
	}
	