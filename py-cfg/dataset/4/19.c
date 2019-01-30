#include<bits/stdc++.h>
using namespace std;
bool fin(string,string);
int main()
{ ios::sync_with_stdio;
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  { 
    string s1,s2;
    cin>>s1>>s2;
    bool C;
    if(sizeof(s1)>sizeof(s2))
      C=fin(s1,s2);
     else
      C=fin(s2,s1);
     if(C==true)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
  }
}
bool fin(string s1, string s2)
{
	int a=0;
	char f;
	int count=0,flag=0;
	for(int i=0;i<s2.size();i++)
	{
		f=s2[i];
		flag=0;
		for(int j=a;j<s1.size();j++)
		{
			if(s1[j]==f)
			{
				a=j+1;
				count++;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			return false;
		}
	}
	if(count==s2.size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

