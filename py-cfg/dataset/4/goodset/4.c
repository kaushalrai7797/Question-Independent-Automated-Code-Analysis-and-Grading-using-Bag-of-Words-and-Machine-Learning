#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     string s,w;
     cin>>s;
     cin>>w;
     int l1=s.length();
     int l2=w.length();
     int j=0;
     if(l1<l2){
            int c=0,k=0;
        for(int i=0;i<l1;i++){
            for(int j=k;j<l2;j++){
                if(s[i]==w[j]){
                    k=j+1;
                    c++;
                    break;
                }
            }
            if(c==l1)
                break;
        }
        if(c==l1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
     }
     else{
            int c=0,k=0;
        for(int i=0;i<l2;i++){
            for(int j=k;j<l1;j++){
                if(w[i]==s[j]){
                    k=j+1;
                    c++;
                    break;
                }
            }
            if(c==l1)
                break;
        }
        if(c==l2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

     }
   }
}
