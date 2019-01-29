#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
            ans[i]=a[n-1];
        else
        {
            int k=n/(i+1);
            if(n%(i+1)==0)
                ans[i]=a[k-1];
            else
                ans[i]=a[k];
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        cout<<ans[k]<<endl;
    }
}