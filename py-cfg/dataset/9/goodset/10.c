#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int noq;cin>>noq;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;++i)
    {
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<noq;++i)
    {
        int k;cin>>k;
        int notime=n/(k+1);
        if(n%(k+1)!=0)
        notime+=1;
        cout<<arr[notime-1]<<endl;
    }
    return 0;
}