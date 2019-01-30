#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,k,q;
cin>>n;
long int a[n],i,j;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
cin>>q;
for(i=0;i<q;i++)
{
long int s=0,j=0;
cin>>k;
long int w=n;
while(w>0)
{

    s=s+a[j];
    j++;
    w=w-k-1;
}
cout<<s<<endl;

}
return 0;
}
