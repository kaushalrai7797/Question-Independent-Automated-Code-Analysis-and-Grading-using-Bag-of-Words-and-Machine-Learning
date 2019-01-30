#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    SPEED;
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        
        int i=0,j=0;
        int a[256]={0},b[256]={0};
        while(s1[i]!='\0'){
            a[int(s1[i])]+=1;
            i++;
        }
        
        while(s2[j]!='\0'){
            b[int(s2[j])]+=1;
            j++;
        }
        
        int f1=1,f2=1;
        
        for(int i=0;i<256;i++){
            if(b[i]>a[i]){
                f1=0;
            }
        }
        
        for(int i=0;i<256;i++){
            if(a[i]>b[i]){
                f2=0;
            }
        }
        
        if(f1||f2) cout<<"YES\n";
        else cout<<"NO\n";
        
        
    }
    return 0;
}