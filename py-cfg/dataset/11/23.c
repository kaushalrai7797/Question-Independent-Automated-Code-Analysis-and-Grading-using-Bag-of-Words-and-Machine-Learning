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
        int flag=0;
        for(i=0;i<26;i++)
        {
            if(a[i]>0&&b[i]>0)
            flag=1;
        }
        if(flag==1)
        {
            int fg=1;
            for(i=0;i<26;i++)
            {
                if(a[i]!=b[i])
                {
                    fg=0;
                    break;
                }
            }
            if(fg==0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
