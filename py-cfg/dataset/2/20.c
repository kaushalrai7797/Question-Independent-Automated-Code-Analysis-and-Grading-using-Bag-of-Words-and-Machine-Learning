#include <iostream>
#include<math.h>
using namespace std;
int lm(int a){
    int i,b=a;
    for(i=0;a/10!=0;i++){
        a=a/10;
    }
    return b/ (pow(10,i));
        }
int main()
{   int t;
   cin>>t;
    while(t--){
    int i=0,k,m,j,w=0;
    cin>>k;
    k-=1;
    for(j=1;i<=k;j++){
            m=j;
    for(i=0;j!=0;i++){
        j=j-lm(j);
    }
    if(i==k){
            w=m;
    }
        j=m;
    }
    cout<<w<<endl;
    }
    return 0;
}
