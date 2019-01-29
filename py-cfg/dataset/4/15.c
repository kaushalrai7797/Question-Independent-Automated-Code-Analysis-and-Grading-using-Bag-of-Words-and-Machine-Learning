#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string m,w;
        cin>>m>>w;
        
        int l1=m.length();
        int l2=w.length();
        //cout<<l1<<" "<<l2<<endl;
        if(l1>l2)
            cout<<"NO"<<endl;
        else
        {

                char ma[l1+1];
                char wa[l2+1];
                
                strcpy(ma,m.c_str());
                strcpy(wa,w.c_str());
                
                char ch=ma[0];
                int k=0;
                for(int i=0;i<l2;i++)
                {
                    //cout<<ch<<" "<<wa[i];
                    if(wa[i]==ch)
                     {
                         k++;
                         ch=ma[k];
                     }
                     //cout<<" "<<k<<endl;
                }
                //cout<<k<<endl;
                if(k==l1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

        }
    }
    return 0;
}