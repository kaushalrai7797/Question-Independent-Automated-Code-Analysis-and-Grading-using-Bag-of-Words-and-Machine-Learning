
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        string m,w;
        cin>>m>>w;
        int len1=m.length();
        int len2=w.length();

        if(len1<=len2)
        {

            int index=0;
            int res=0;

            for(int j=0;j<len1;j++)
            {
                int flag=0;

                for(int k=index;k<len2;k++ )
                {
                    if(m[j]==w[k])
                    {
                        index=k+1;
                        flag=1;
                        break;
                    }

                }

                if(flag==0)
                {
                    cout<<"NO"<<endl;
                    res=1;
                    break;
                }

            }

            if(res==0)
                cout<<"YES"<<endl;


        }

        else
        {

            int index=0;
            int res=0;

            for(int j=0;j<len2;j++)
            {
                int flag=0;

                for(int k=index;k<len1;k++ )
                {
                    if(w[j]==m[k])
                    {
                        index=k+1;
                        flag=1;
                        break;
                    }

                }

                if(flag==0)
                {
                    cout<<"NO"<<endl;
                    res=1;
                    break;
                }

            }

            if(res==0)
                cout<<"YES"<<endl;

        }
    }






}
