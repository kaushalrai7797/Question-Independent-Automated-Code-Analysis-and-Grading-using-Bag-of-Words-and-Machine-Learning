#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,m,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int min[n+1], max[n+1];
		min[0]=0;
		max[0]=0;
		for(i=1; i<=n; i++)
		{
			min[i]=(i+1)+min[i/2]+min[i-1-(i/2)];
			max[i]=(i+1)+max[i-1];
		}

		if(min[n]>m)
			cout << "-1\n";
		else if(max[n]>=m)
			cout<<"0\n";
		else
			cout<<(m-max[n])<<endl;

	}


return 0;
}
