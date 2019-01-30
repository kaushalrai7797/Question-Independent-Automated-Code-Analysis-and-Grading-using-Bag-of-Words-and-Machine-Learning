#include <iostream>
using namespace std;

int main() {
	int a,b,i=0,r=0,n,sum,num;
	cin>>a>>b;
	n=a-b;
	r=n%10;
	if(r<9)
	cout<<n+1;
	else
	cout<<n-1;
	return 0;
}