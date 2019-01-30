#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    long long int a,b,z;
    cin>>t;
    while(t--)
    {
        a=b=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            a+=z;
        }
        for(int i=0;i<m;i++)
        {
            cin>>z;
            b+=z;
        }
        if(a==b&&n==m)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}