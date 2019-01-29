#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long



bool primer(int n)
{
    
    
    for(int i=2;i*i<=n;i++)
    {
        
        if(n%i == 0)
            return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int n,m,x,y;
    int a,b;
    bool ans= false;
        string s1;
    ll sum = 0;
    cin>>t;
    int *arr = new int[100010];
    while(t--)
    {
        cin>>n;
        
        cin>>s1;
        sum = 0;
     ll   k = 0 ;
        for(int i=0;i<n;i++)
        {
            if(s1[i] == '1')
            {
                k++;
                sum = sum + (long long)k;
                
            }
        }
        
        cout<<sum<<endl;
    }
    
    
	return 0;
}
