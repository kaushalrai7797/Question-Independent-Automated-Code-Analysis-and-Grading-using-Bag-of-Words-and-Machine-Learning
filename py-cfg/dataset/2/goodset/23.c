#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

  long long   ops(  long long   n)
{
	  long long   count=0;
	while(n>0)
	{
		string s=to_string(n);
		long long   first=s[0]-'0';
		string lst=s.substr(1,s.size()-1);
		long long last=atoll(lst.c_str());
		long long steps=(last/first)+1;
		count=count+steps;
		n=n-(steps*first);
	}
	return count;
}

 int  main()
{
	  long long   t;
	cin>>t;
	while(t--)
	{
		  long long   k;
		cin>>k;
		  long long   low=1;
		  long long   high=10e+18;
		  long long   ans=0;
		while(low<=high)
		{
			  long long   mid=(low+high)/2;
			  long long   count=ops(mid);
			 // cout<<count<<endl;
			if(count<k)
			{
				low=mid+1;
			}
			if(count>k)
			{
				high=mid-1;
			}
			if(count==k)
			{
				high=mid-1;
				ans=mid;
			}
		}
		if(k==2)
		{
			cout<<"9"<<endl;
		}
		else
		{
			cout<<ans-1<<endl;	
		}
		
	}	
}