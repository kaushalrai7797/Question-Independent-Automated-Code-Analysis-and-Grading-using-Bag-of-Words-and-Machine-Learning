#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	a=a-b;
    if(a<0){
        a=a*-1;
    }
    if(a%10==9)
		a--;
	else
		a++;
	cout<<a<<endl;
	return 0;
}
