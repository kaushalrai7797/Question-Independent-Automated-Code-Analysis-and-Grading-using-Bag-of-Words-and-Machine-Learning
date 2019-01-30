#include <iostream>
using namespace std;

int main() {
	int a,b,i=0,r=0,n,sum,num;
	cin>>a>>b;
	n=a-b;
	if(n>9)
	{
	num=(n/10);
	while(i<2)
	{
		r=r+n%10;
		n=n/10;
		i++;
	}
	if(r>=10)
	r=r/10;
	num=num*10+r;
	n=num;
	}
	else
	n=n+1;
	cout<<n;
	
	return 0;
}