#include <iostream>
#include<cstring>
using namespace std;

int main()
{	int a,b;
	cin>>a>>b;
    if((a-b)%10 == 9 ) cout<<(a-b) -1;//Edge case eg 99 remainder will be 9 hence we cannot add to this instead we need sub. 
	else cout<<(a-b) +1;
	return 0;

}