#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0,total;
		int f,a,tor,d=0;
		cin>>total;
		sum=(total)*(total+1)/2;
		cin>>f;
		while(f--)
		{
			cin>>a;
			sum=sum-a;
		}
		cin>>tor;
		((total%2==0)?(d=total/2):(d=(total+1)/2));
		cout<<(((d-tor)*sum)/(double)d)<<endl;
	}
	return 0;
}