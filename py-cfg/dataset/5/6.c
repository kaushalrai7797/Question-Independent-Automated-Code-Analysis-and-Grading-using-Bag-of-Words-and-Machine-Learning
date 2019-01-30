#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    lli a,b,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x=y=a=b=0;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            a+=z;
            x^=z;
        }
        for(int i=0;i<m;i++)
        {
            cin>>z;
            b+=z;
            y^=z;
        }
        if(n==1&&m==1)
            cout<<"Bob"<<endl;
        else if(n==1||m==1)
            cout<<"Alice"<<endl;
        else if(a==b)
            cout<<"Bob"<<endl;
        else if(x&&y)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }
}