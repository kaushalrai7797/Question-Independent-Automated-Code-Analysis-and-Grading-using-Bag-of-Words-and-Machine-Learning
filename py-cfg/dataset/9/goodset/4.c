#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    long int su[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
     //   cin>>a[i];
     sum=sum+a[i];
     su[i]=sum;
    }
    long int q,p,k;
    cin>>q;
    while(q!=0)
    {
        cin>>k;
        p=n/(k+1);
        //cout<<2;
        if(n%(k+1)!=0)
        {
            p++;
        }
        cout<<su[p-1]<<"\n";
        q--;
    }
    return 0;
}
