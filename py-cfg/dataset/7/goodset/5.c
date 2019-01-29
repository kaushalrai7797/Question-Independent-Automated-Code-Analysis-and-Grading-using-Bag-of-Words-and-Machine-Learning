///*BISMILLAHIR RAHMANIR RAHIM*///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int a, b, res;
    string s;
    cin >> a >> b;
    res = a - b;
    while ( res ) {
        s += ( ( res % 10 ) + '0' );
        res /= 10;
    }
    reverse( s.begin(), s.end() );
    if ( s[0] == '9' ) s[0] = '1';
    else s[0] = '9';
    cout << s << endl;
    return 0;
}
