#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{ll t,i,n,top,ans,r,c;
int a,b;

	cin>>a>>b;
	a=a-b;
	c=0;
	ans=0;
	while(a>0)
	{
		r=a%10;
		if(c==0)
		{
		if(r==0||r==1||r==2||r==3||r==4||r==4||r==5||r==6||r==6||r==7||r==8)
		ans=9*pow(10,c)+ans;
		else
		ans=1*pow(10,c)+ans;
	    }
	    else
	    ans=r*pow(10,c)+ans;
	    ++c;
	    a=a/10;
	}
	cout<<ans;
	
}
