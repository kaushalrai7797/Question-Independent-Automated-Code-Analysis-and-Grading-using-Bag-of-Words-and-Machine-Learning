#include<iostream>
using namespace std;
typedef long long int ll;
int main() {
	ll i,j,n,t,m,x,y,c,k,z;
	cin>>t;
	double a=0;
	while(t--)
	{
	cin>>n>>m;
	k=n*(n+1);
	k=k/2;
	for(i=0;i<m;i++)
	{
	    cin>>z;
	    k=k-z;
	}
	cin>>x;
	if(n%2==1)
	n++;
	n=n/2;
	a=(double)k;
	a=a*(n-x);
	a=a/n;
	printf("%0.4f\n",a);
	}
	return 0;
} 

