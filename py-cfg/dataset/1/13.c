#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>n>>k;

    vector<int> arr(k);
    for(int i=0;i<k;i++) cin>>arr[i];

    if(k==1&&n==1){
      cout<<"YES"<<endl;
      cout<<1<<endl;
      continue;
    }
    if(k==1&&n>1){
      cout<<"NO"<<endl;
      continue;
    }

    vector<int> res(n+1,0);
    int mx = n;
    for(int i=1;i<arr[0];i++){
      res[i] = mx--;
    }
    for(int i=k-1;i>=0;i--){
      res[arr[i]] = mx--;
    }
    for(int i=1;i<=n;i++){
      if(!res[i])
        res[i] = mx--;
    }
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++) cout<<res[i]<<" ";
    cout<<endl;
  }
}
