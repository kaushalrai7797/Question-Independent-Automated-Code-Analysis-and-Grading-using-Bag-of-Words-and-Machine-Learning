#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char ch[n];
		int ctr=0;
		for(int i=0;i<n;i++)
		{
			cin>>ch[i];
		}
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='1')
			{
				ctr++;
			}
		}
		int res=ctr*(ctr+1)/2;
		cout<<res<<endl;
	}
	// your code goes here
	return 0;
}