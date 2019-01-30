#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int test,n,cnt1,sum;
    cin>>test;
    //vector<int>v;
    char a[100005];
    while(test--)
    {
       // v.clear();
        cnt1=sum=0;
        cin>>n;
        getchar();
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]=='1')
                cnt1++;
        }
        sum=(cnt1*(cnt1-1))/2;
        sum+=cnt1;
        cout<<sum<<'\n';
    }
}
