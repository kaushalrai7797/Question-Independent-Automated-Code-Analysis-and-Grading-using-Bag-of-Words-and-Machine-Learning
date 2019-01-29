#include <iostream>
#include <iomanip>
 
#include <cassert>
 
using namespace std;
  
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, b, p;
        cin >> n;
        double res = ((double)n*(n+1)) / 2;
        int pa = (n+1)/2;
        cin >> b;
        for(int i = 0; i < b; i++) {
            int x;
            cin >> x;
            res -= x;
        }
        cin >> p;
        assert(0 <= p && p <= pa);
        cout << fixed << setprecision(4) << res*(pa-p)/pa << endl;
    }
    return 0;
} 