#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,i,added,Q,k,x;
    cin>>N;
    long long int a[N+5];
    vector <long long int> v;
    for(i=0;i<N;i++)
    cin>>a[i];
    sort(a,a+N);
    cin>>Q;
    added=0;
    for(i=0;i<N;i++)
    {
        added+=a[i];
        v.push_back(added);
    }
    while(Q--)
    {
        cin>>k;
        x=N/(k+1);
        if((N%(k+1))!=0)
        {
            x+=1;
        }
        cout<<v[x-1]<<endl;
    }
    return 0;
}