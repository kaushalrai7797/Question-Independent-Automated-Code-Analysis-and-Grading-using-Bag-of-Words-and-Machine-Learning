#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string str1,str2;
       cin>>str1;
       cin>>str2;
       int i,j,n,m,x[26]={0},y[26]={0},c=0,c1=0;
       n=str1.length();
       m=str2.length();
       for(i=0;i<n;i++)
       x[str1[i]-'a']++;
       for(j=0;j<m;j++)
       y[str2[j]-'a']++;
       for(i=0;i<26;i++)
       {
           if((x[i]!=y[i])&&(x[i]!=0)&&(y[i]!=0))
            c1++;
            if(((x[i]!=0)&&(y[i]==0))||((x[i]==0)&&(y[i]!=0)))
            c++;
       }
       if((c==0)&&(c1>0))
       {
           cout<<"NO"<<endl;
       }else 
       {
           cout<<"YES"<<endl;
       }
    }
}