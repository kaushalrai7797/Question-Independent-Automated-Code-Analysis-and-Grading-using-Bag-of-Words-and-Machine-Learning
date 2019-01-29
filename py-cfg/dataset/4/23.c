#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,c,ind;
	cin>>t;
	char m[25001],w[25001];
	while(t--)
	{
		cin>>m>>w;
		c=1;
		ind=0;
		if(strlen(m)>=strlen(w))
		{
			for(int i=0;i<strlen(w);i++)
			{
				for(int j=ind;j<strlen(m);j++)
				{
					if(m[j]==w[i])
					{
						c=0;
						ind=j+1;
						break;
					}
					else
					c=1;
				}
				if(c==1)
				break;
			}
		}
		else
		{
			for(int i=0;i<strlen(m);i++)
			{
				for(int j=ind;j<strlen(w);j++)
				{
					if(w[j]==m[i])
					{
						c=0;
						ind=j+1;
						break;
					}
					else
					c=1;
				}
				if(c==1)
				break;
			}
		}
		if(c==0)
		cout<<"\n Yes";
		else
		cout<<"\n No";
	}
	return 0;
}