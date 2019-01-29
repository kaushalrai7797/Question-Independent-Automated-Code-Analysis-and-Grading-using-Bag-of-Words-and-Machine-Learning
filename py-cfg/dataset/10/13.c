#include<iostream>
using namespace std;

int main()
{
int t;
while(t--)
{
	int n;
	double ans;
	cin >> n;
	ans = n*(n+1)/2;
	int miss;
	cin >> miss;
	while(miss--)
	{
		int value;
		cin >> value;
		ans -= value;
	}
	int tore;
	cin >> tore;
	if(n%2 !=0)
		n++;
	int gen = n/2;
	gen -= tore;
	ans*= gen;
	ans/=(double)(n/2);
	cout << ans <<endl;
}
return 0;
}





