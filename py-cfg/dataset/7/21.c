#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B;
	cin>>A>>B;
	
	if(A-B==9||A-B==99||A-B==999||A-B==9999)
	    cout<<A-B-1;
	else
	    cout<<A-B+1;   
	return 0;
}
