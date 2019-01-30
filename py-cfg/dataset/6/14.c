#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		int m=0;
		scanf("%d\n",&n);
		char ch[n+1];
		scanf("%s",ch);
		int i=0;
		while(ch[i]!='\0')
		{
			if(ch[i]=='1')
			m++;
			i++;
		}
		int res=(m*(m+1))/2;
		cout<<res<<endl;
	}
}