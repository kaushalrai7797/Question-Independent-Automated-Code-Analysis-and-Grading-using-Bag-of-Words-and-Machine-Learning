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
        if((n==1&&m==1)||(a==b))
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}