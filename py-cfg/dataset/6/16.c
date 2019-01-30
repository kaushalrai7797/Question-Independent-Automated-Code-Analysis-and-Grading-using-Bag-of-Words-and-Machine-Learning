#include<bits/stdc++.h>
using namespace std;

void subString(int arr[], int n, int x){
    int s=0,e=0;
    
    for(int i=0; i<n; i++){
        for(int l=1; l<=n; l++){
            for(int j=i; j<l; j++){
                    cout<<arr[j];
                 if(i==n-1 && arr[j]==1){
                     s=0;
                 }
                 else{
                     if(j==i) s=arr[j];  
                      else e=arr[j];
                
                 }
                 
            }
             cout<<"\n"<<"s="<<s<<"\t"<<"e="<<e<<endl;
            cout<<"\n";
               if(s==1 && e==1){
                   x++;
                   cout<<"\n"<<"x="<<x<<endl;
               }
               s=0; e=0;
        }
    }
    cout<<"x="<<x;
}

int main(){
    
    int t,i,j,k;cin>>t;
    while(t--){
        int x=0,n;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1)x++;
        }
        cout<<"x1="<<x<<endl;
        subString(arr, n, x);
       //cout<<result<<endl;
        
    }
    return 0; 
}