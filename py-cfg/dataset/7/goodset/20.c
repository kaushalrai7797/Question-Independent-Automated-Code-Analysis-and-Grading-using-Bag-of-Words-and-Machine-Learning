#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B;
	cin>>A>>B;
	
	if((A-B)%10==9)
	    cout<<A-B-1;
	else
	    cout<<A-B+1;   
	return 0;
}
