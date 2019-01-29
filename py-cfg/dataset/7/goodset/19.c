#include <iostream>
using namespace std;

int main() {
int a,b,c,d=0,e,f;
cin>>a;
cin>>b;
c=a-b;
e=c;
int g=3;
while(g>2)
{
    d=c%10;

    if(d==0||d==1)
        e=e+1;

else

    e=e-1;
cout<<e;
g--;

return 0;
}
	
}
