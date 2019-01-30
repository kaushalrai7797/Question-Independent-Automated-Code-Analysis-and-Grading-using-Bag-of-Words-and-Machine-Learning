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
d[b[i]-'a']=1;
}
for(int i=0;b[i]!=0;i++)
{c[b[i]-'a']--;
d[b[i]-'a']=0;
}
for(int i=0;i<26;i++)
{if(c[i]>0)
{flag=1;
break;}
}
for(int i=0;i<26;i++)
{if(d[i]>0)
{flag2=1;
break;}
}
if(flag==flag2)
cout<<"YES\n";
else
    cout<<"NO\n";
}
return 0;
}
