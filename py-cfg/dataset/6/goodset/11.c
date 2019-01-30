#include<bits/stdc++.h>
using namespace std;
long long  sum(long  long  n){
    return ((n)*(n+1))/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long  c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
c++;
            }
        }
        cout<<sum(c)<<"\n";
    }
}