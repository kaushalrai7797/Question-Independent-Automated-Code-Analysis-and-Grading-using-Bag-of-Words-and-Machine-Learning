#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y;
	z=x-y;
	if(z%10==9)
	cout<<z-1;
	else
	cout<<z+1;
}