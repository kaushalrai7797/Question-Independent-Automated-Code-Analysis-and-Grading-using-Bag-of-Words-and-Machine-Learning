#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum[n];
    sum[0] = a[0];
    for(int i=1; i<n; i++){
        sum[i] = sum[i-1]+a[i];
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int k;
        cin>>k;
        int t = int(ceil((n*1.0)/(k+1))-1);
        cout<<sum[t]<<endl;
    }

    return 0;
}