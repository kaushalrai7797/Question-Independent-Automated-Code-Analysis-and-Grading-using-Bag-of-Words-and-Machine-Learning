#include<iostream>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{string a;
string b;
cin>>a>>b;
int c[26]={0},d[26]={0},flag=0,flag2=0;
for(int i=0;a[i]!=0;i++)
{c[a[i]-'a']++;
}
for(int i=0;b[i]!=0;i++)
{
d[b[i]-'a']++;
}
for(int i=0;i<26;i++)
{if(c[i]!=d[i])
{flag=1;
break;}
}
for(int i=0;i<26;i++)
        { if(c[i]) c[i]=1;
        
        if(d[i])d[i]=1;}
for(int i=0;i<26;i++)
{if(d[i]!=c[i])
{flag2=1;
break;}
}
//cout<<flag<<" "<<flag2<<"\n";
if(flag==flag2)
cout<<"YES\n";
else
    cout<<"NO\n";
}
return 0;
}
