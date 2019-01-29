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
        for(int i = 0; i < n; i++){
            cin>>A[i];
            sum1 += A[i];
            if(A[i] > 0 ) c1++;
        }
        for(int j = 0; j < m; j++){
            cin>>B[j];
            sum2 += B[j];
            if(B[j] > 0 ) c2++;
        }
        if(c1 == c2 && sum1 == sum2 ){
            cout<<"Bob"<<"\n";
        }
        else 
        cout<<"Alice"<<"\n";
        
        
    }
    
    return 0;
}
