#include <iostream>
using namespace std;

int main() {
    // int t;
// 	cin>>t;
	int a,b;
// 	while(t-->0){
	    cin>>a>>b;
	    a=a-b;
	    if(a%10!=0)
	        a=a-1;
	        else
	        a=a+1;
	        cout<<a<<endl;
// 	}
	return 0;
}
