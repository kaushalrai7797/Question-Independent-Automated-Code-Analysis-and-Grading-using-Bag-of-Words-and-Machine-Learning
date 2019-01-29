#include<bits/stdc++.h>
using namespace std;
     
int main()
{
	long long int n,j,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(i=1;i<n;i++)
	{
		a[i]=a[i]+a[i-1];
	}
	
	long long int q;
	cin>>q;
	for(i=0;i<q;i++)
	{
		long long int k,x;
		cin>>k;
		x=n/(k+1);
		if((n%(k+1))!=0)
		{
		    x+=1;
		}
		cout<<a[x-1]<<endl;
	}	
	
			
}