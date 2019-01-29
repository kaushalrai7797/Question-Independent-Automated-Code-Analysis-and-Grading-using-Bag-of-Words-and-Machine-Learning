#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string r1,r2;
		cin>>r1;
		cin>>r2;
		int ing1[26]={0};
		bitset<26> i1;
		int ing2[26]={0}; 
		bitset<26> i2;
		int len=r1.size();
		for(int i=0;i<len;i++)
		{
			ing1[int(r1[i]-'a')]++;
			i1.set(int(int(r1[i])-int('a')));
		}
		len=r2.size();
		for(int i=0;i<len;i++)
		{
			ing2[int(r2[i]-'a')]++;
			i2.set(int(r2[i]-'a'));
		}
		i1&=i2;
		if(i1.count()!=i2.count())
			cout<<"YES"<<endl;
		else
		{
			bool flag=true;
			for(int i=0;i<26;i++)
			{
				if(ing1[i]!=ing2[i])
				{
					flag=false;
					break;
				}
			}
			if(flag)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;	
		}
	}
	return 0;
}