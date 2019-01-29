#include<bits/stdc++.h>
using namespace std;

bool subseq(string a, string b, int la, int lb)
{
    int i=0, j=0, c=0;
    while(i<la && j<lb)
    {
        if(a[i]==b[j])
        {
            ++i;
            ++j;
        }
        else
            ++i;
    }
    if(j==lb)
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t, lm, lw;
    string m, w;
    bool x;
    cin>>t;
    while(t--)
    {
        cin>>m>>w;
        lm=m.length();
        lw=w.length();
        if(lm>=lw)
            x=subseq(m, w, lm, lw);
        else
            x=subseq(w,m, lw, lm);
        if(x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}