#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,i;
    cin>>T;
    while(T--)
    {
        string str1,str2;
        cin>>str1>>str2;
        int a[36],b[35];
        for(i=0;i<35;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        for(i=0;i<str1.length();i++)
        a[str1[i]-'a']+=1;
        for(i=0;i<str2.length();i++)
        b[str2[i]-'a']+=1;
        int count=0;
        for(i=0;i<26;i++)
        {
            if(a[i]>0&&b[i]>0)
            count+=1;
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int flag=1;
            for(i=0;i<26;i++)
            {
                if(a[i]>0&&b[i]>0)
                {
                    //cout<<a[i]<<" "<<b[i]<<endl;
                    if(a[i]!=b[i])
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
