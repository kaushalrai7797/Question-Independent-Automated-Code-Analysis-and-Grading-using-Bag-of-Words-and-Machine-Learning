#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	sort(a,a+n);
	cin>>k;
	for(int j=0; j<k; j++)
	{
	    int temp,ans=0;
	    cin>>temp;
	    for(int i=0; i<n; i++)
	    {
	        ans+=a[i];
	        n=n-temp;
	    }
	  cout<<ans<<endl;
	}
	return 0;
}