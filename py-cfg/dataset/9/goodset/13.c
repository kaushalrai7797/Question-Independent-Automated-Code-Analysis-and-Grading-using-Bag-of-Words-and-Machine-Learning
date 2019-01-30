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
	int ad[n];ad[0]=a[0];
	for(int i=1; i<n; i++)
	 ad[i]=a[i]+ad[i-1];
	for(int j=0; j<k; j++)
	{   
	    int temp,ans=0;
	    cin>>temp;
	    temp++;
	     ans=ad[n/temp-1];
	    if(n%(temp))
	    ans+=a[n/temp];
	  cout<<ans<<endl;
	}
	return 0;
}