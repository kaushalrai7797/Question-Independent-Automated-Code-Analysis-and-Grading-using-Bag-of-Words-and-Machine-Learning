#include<bits/stdc++.h>
using namespace std;

class Rec
{
public:
	string s1,s2;
	int a[26]={0},b[26]={0};
	void pro()
	{
		cin>>s1>>s2;
		for(int i=0;s1[i];i++)
			a[s1[i]-97]++;
		for(int i=0;s2[i];i++)
			b[s2[i]-97]++;
		int c=0,c1=0;
		for(int i=0;i<26;i++)
		{
			if(a[i]!=b[i] && a[i]!=0 && b[i]!=0)
				c1++;
			if((a[i]==0 && b[i]!=0) || (a[i]!=0 && b[i]==0))
				c++;
		}
		if(c==0 && c1>0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
};

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		Rec a;
		a.pro();
	}
}