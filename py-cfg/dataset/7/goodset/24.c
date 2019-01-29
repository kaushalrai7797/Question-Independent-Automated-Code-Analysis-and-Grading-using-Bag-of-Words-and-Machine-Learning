#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
vector <int> v;

int main(){
    int a,b,ans;
    cin >>a >>b;
    ans = a-b;
    if((ans+1)%10 !=0)
        cout << ans+1;
     else
            cout << ans-1;
    return 0;
}
