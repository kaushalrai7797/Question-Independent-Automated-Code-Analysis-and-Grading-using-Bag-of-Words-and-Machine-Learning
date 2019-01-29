#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	vector<int>s1;
	
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		s1.push_back(x);
	}
	
	sort(s1.begin(),s1.end());
	int dp[100000];
	dp[0]=s1[0];
	
	for(int i=1;i<n;i++)
	{
		dp[i]=dp[i-1]+s1[i];
	}
	
	int t;
	scanf("%d",&t);
	int to=accumulate(s1.begin(),s1.end(),0);
	while(t--)
	{
		int k,x;
		cin>>k;
		x=n/(k+1);
		if((n%(k+1))!=0)
		{
		    x+=1;
		}
		cout<<dp[x-1]<<endl;
	}
	
	
	return 0;
}

