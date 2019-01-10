#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x;
        int b[n];
        bool s[1000001]={false};
        int prev,prev2;
        int fl=0;
        for(int i=0;i<k;i++)
        {
            cin>>x;
            s[x-1]=true;
            if(i==0)
            {
              prev=x-1;
            }
            else if(i==1)
            {
              prev2=x-1;
              if(prev2-prev>1)
                fl=1;
            }
        }
        if(k==1)
        {
            if(n>1)
                cout<<"NO\n";
            else
                cout<<"YES\n1\n";
            continue;
        }
        if(fl==1 && k==2)
        {
          cout<<"NO\n";
          continue;
        }
        int my=n;
        for(int i=0;i<prev;i++)
        {
          b[i]=my;
          my--;
        }
        for(int i=prev+1;i<prev2;i++)
        {
            b[i]=my;
            my--;
        }
        int start=my-k+1;
        int end=start-1;
        for(int i=0;i<n;i++)
        {
            if(i>=prev2 || i==prev)
            {
            if(s[i])
            {
                b[i]=start;
                start++;
            }
            else
            {
                b[i]=end;
                end--;
            }
            }
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
