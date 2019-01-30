#include <bits/stdc++.h>
#include <sstream>  // for string streams
#include <string>  // for string
#include <vector>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int c = a-b;
    c++;
    if(c%10==0)
    {
    	c-=2;
    }
    cout << c << endl;
    return 0;
}
