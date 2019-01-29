#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int j=0;
        int A[a.length()];
        for(int i=0;i<a.length();i++)
            A[i]=0;

        for(int i=0;i<b.length();i++)
        {
            if(b[i]==a[j]&&j<a.length())
                {
                    A[j]=1;
                    j++;
                }
        }

        int c=0;

        for(int i=0;i<a.length();i++)
        {
            if(A[i]==0)
                c++;
        }

        if(c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
