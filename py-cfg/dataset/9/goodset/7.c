#include<bits/stdc++.h>
using namespace std;
class Bhalla;
void merge_sort(int * ,long ,long );
void merge(int * ,long ,long ,long );

class Bhalla
{
public:
	long n;
	Bhalla()
	{
		cin>>n;
		int a[n];
		for(long i=0;i<n;i++)
			cin>>a[i];
		merge_sort(a,0,n-1);
		long Q,K,sum=0,t;
		cin>>Q;
		for(long i=0;i<Q;i++)
		{
			cin>>K;
			sum=0;
			if(n%(K+1)==0)
				t=n/(K+1);
			else
				t=n/(K+1) + 1;
			for(long j=0;j<t;j++)
				sum=sum+a[j];
			cout<<sum<<endl;
		}
	}
};

void merge(int A[ ] ,long start,long mid,long end)
{
    long p=start,q=mid+1;
    int Arr[end-start+1],k=0;
    for(long i = start ;i <= end ;i++)
    {
        if(p > mid)
            Arr[ k++ ] = A[ q++] ;
        else if ( q > end)
            Arr[ k++ ] = A[ p++ ];
        else if( A[ p ] < A[ q ])
            Arr[ k++ ] = A[ p++ ];
        else
            Arr[ k++ ] = A[ q++];
    }
    for (long p=0 ; p< k ;p ++)
    {
        A[ start++ ] = Arr[ p ] ;
    }
}

void merge_sort (int A[ ] ,long start ,long end )
{
    if( start < end )
    {
        long mid = (start + end ) / 2 ;
        merge_sort (A, start , mid ) ;
        merge_sort (A,mid+1 , end ) ;
        merge(A,start , mid , end );
    }
}

int main()
{
	Bhalla a;
}