#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m;
    long long int a,b,z;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        vector<int> x,y;
        a=b=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>z;
            if(z) x.pb(z);
        }
        for(int i=0;i<m;i++)
        {
            cin>>z;
            if(z) y.pb(z);
        }
        if(n==m&&x.size()==y.size())
        {
            sort(x.begin(),x.end());
            sort(y.begin(),y.end());
            for(int i=0;i<x.size();i++)
            {
                if(x[i]!=y[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
            cout<<"Alice"<<endl;
    }
}