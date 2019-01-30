#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        string s;
        cin>>s;
        long long int c=0;
        for( i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
        }
        cout<<(c*(c+1))/2<<endl;
    }
    return 0;
}
