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
{int arr[254]={0}; 
  for(int i=0;i<s1.length();i++)
  { int n=s1[i];
     arr[n]=1;
  }
  for(int i=0;i<s2.length();i++)
  { int n=s2[i];
    if(arr[n]!=1)
     return false;
  }
  return true;
}

