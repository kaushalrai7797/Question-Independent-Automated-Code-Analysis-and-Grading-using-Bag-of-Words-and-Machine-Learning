#include <iostream>

using namespace std;

int main(){
   int A, B;
   while(cin >> A >> B){
       int ans = A - B;
       if(ans % 10 == 9) ans --;
       else ans ++;
       cout << ans << endl;
   }
}