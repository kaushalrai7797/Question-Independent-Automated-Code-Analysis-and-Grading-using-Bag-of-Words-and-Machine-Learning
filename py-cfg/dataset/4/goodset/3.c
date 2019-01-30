#include <bits/stdc++.h>
using namespace std;
bool check(string s1,string s2)
 {
     int i=0,j=0;
     while(i<s1.length() && j<s2.length())
      {
          if(s1[i]==s2[j])
           {
               i++;
               j++;
           }
           else
            j++;
      }
     if(i!=s1.length())
      return false;
     return true;
 }
int main() {
	int t;
	cin>>t;
	while(t--)
	 {
	     string s1,s2;
	     cin>>s1>>s2;
	     if(check(s1,s2) || check(s2,s1))
	      cout<<"YES\n";
	     else
	      cout<<"NO\n";
	 }
	return 0;
}
