#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int q,n,k;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        if(k>n) {cout<<"NO"<<endl; continue;}
        else
        {
            cout<<"YES\n";
            for(int i=n-k+1;i<=n;i++) cout<<i<<' ';
            for(int i=n-k;i>=1;i--) cout<<i<<' ';
            cout<<endl;
        }
    }
    return 0;
}
