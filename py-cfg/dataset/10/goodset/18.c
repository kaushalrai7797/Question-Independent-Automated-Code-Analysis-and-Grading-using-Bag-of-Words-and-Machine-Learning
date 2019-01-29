#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <map>
#include <vector>
#include <unordered_map>
using namespace std;
 
int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n,f,x,m;
        double c=0;
        scanf("%i%i",&n,&f);
        c=((double)n*(n+1))/2;
        m=(n+1)/2;
        for(int i=0;i<f;i++)
        {
            int a;
            scanf("%i",&a);
            c-=a;
        }
        scanf("%i",&x);
        c=((double)(m-x)*c)/m;
        cout << fixed << setprecision(4) <<c<<endl;
    }
    return 0;
}  