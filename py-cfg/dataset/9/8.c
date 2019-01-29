#include<bits/stdc++.h>
using namespace std;

class Bhalla
{
public:
	long n;
	Bhalla()
	{
		cin>>n;
		int a[n];
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
			for(long j=i;j>0;j--)
			{
				if(a[j]<a[j-1])
					swap(a[j],a[j-1]);
				else
					break;
			}
		}
		long Q,K,sum=0,t;
		cin>>Q;
		for(long i=0;i<Q;i++)
		{
			cin>>K;
			sum=0;
			if(n%(K+1)==0)
				t=n/(K+1);
			else
				t=n/(K+1) + 1;
			for(long j=0;j<t;j++)
				sum=sum+a[j];
			cout<<sum<<endl;
		}
	}
};

int main()
{
	Bhalla a;
}