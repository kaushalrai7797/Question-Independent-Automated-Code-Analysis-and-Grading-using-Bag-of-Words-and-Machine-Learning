#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::cout<<std::fixed;
	std::cout<<std::setprecision(9);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			a[i]=i;
		}
		int f;
		cin>>f;
		for(int i=0;i<f;i++)
		{
			int x;
			cin>>x;
			a[x]=0;
		}
		int r;
		cin>>r;
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=a[i];
		}
		int num=(n/2);
		if(n%2!=0)
		{
			num++;
		}
		long long num2=((num-r)*sum);
		double num3=num2;
		num3=(num3/num);
		cout<<num3<<endl;
	}
}