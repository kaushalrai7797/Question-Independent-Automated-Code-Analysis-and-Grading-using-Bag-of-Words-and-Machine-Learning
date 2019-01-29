#include<iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>m;
        int A[n],B[m];
        int i,count1=0;
        int count2=0;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]>0)
            count1++;
        }
        for(i=0;i<m;i++)
        {
            cin>>B[i];
            if(B[i]>0)
            count2++;
        }
        if(count1==count2)
        cout<<"\nBob";
        else
        cout<<"\nAlice";
        t--;

    }
    return 0;
}
