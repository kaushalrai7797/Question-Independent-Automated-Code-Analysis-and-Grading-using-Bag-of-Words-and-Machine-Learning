#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string m,w;
    cin>>t;
    while(t!=0)
    {
        int flag=0,j=0,i;
        cin>>m>>w;
        if(m.size()>w.size())
        {
            for(i=0;i<m.size();i++)
            {
                if(m[i]==w[j])
                {
                    j++;
                    if(j==w.size())
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        else
        {
            for(i=0;i<w.size();i++)
            {
                if(m[j]==w[i])
                {
                    j++;
                    if(j==m.size())
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        t--;
    }
}
