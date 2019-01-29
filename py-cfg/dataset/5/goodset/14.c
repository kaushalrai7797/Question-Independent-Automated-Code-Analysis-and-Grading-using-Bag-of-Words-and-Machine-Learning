#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    int t = 0;
    cin>>t;
    while(t--){
        ll n, m; 
        cin>>n>>m;
        ll A[n], B[m], c1 = 0, c2 = 0, sum1 = 0, sum2 = 0;
        multiset<ll> set1, set2;
        for(int i = 0; i < n; i++){
            cin>>A[i];
            if(A[i] > 0 ) set1.insert(A[i]);
        }
        for(int j = 0; j < m; j++){
            cin>>B[j];
            if(B[j] > 0 ) set2.insert(B[j]);
        }
    
        if(set1 == set2 ){
            cout<<"Bob"<<"\n";
        }
        else 
        cout<<"Alice"<<"\n";
        
        
    }
    
    return 0;
}
