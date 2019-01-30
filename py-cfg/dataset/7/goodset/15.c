#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,re,ch;
	cin>>a>>b;
	int d=a-b;
	re=d%10;
	d=d/10;
	if(re>=2)
	cout<<d*10+1<<endl;
	else
	cout<<d*10+9;
	
return 0;	
}
