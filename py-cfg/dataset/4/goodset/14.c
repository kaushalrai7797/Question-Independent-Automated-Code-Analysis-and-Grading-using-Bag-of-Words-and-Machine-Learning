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
        int f1=0,f2=0;
                char ma[l1+1];
                char wa[l2+1];
                
                strcpy(ma,m.c_str());
                strcpy(wa,w.c_str());
                
                
                char ch=ma[0];
                int k=0;
                if(l2>=l1)
                {
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
                else
                {
                    ch=wa[0];
                    k=0;
                    for(int i=0;i<l1;i++)
                    {
                        if(ma[i]==ch)
                        {
                            k++;
                            ch=wa[k];
                        }
                    }
                    if(k==l2)
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }

    }
    return 0;
}