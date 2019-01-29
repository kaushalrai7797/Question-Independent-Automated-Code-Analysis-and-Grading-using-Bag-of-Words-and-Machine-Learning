#include <iostream>
#include <string>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,res;
		cin>>n;
		string s;
		cin>>s;
		long long int ctr=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				ctr++;
			}
		}
		res=ctr*(ctr+1)/2;
		cout<<res<<endl;
	}
	// your code goes here
	return 0;
}