#include <iostream>
#include <vector>

using namespace std;

int main(){
  int t,n,k;
  cin>>t;
  while(t--){
    cin>>n>>k;
    if(k==1&&n>1){
      cout<<"NO"<<endl;
      continue;
    }
    vector<int> arr(k);
    for(int i=0;i<k;i++) cin>>arr[i];

    vector<int> res;
    int largest = arr[arr.size()-1];
    int smallest = arr[0];

    for(int i=n;i>=largest+1;i--){ res.push_back(i);
    //  cout<<"Larger : "<<i<<endl;
    }
    for(int i=0;i<k;i++){ res.push_back(arr[i]);
      //cout<<"Itself : "<<arr[i]<<endl;
    }
    for(int i=smallest;i>=1;i--){ res.push_back(i);
    //  cout<<"Smaller : "<<i<<endl;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<res[i]<<" ";
    cout<<endl;
  }
}
