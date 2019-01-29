#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
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
        int n,f,x,m,sum=0;
        float c=0;
        scanf("%i%i",&n,&f);
        sum=(n*(n+1))/2;
        for(int i=0;i<f;i++)
        {
            int a;
            scanf("%i",&a);
            sum-=a;
        }
        scanf("%i",&x);
        m=(n+1)/2;
        c=((float)(m-x)*sum)/m;
        printf("%f\n",c);
    }
    return 0;
}  