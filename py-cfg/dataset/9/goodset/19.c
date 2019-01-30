#include<bits/stdc++.h>
using namespace std;
main()
{long long int n,q,j,k,s=0,i,l,p;
    cin>>n;
    long long int a[n];
   for( i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
    cin>>q;
    while(q--)
    {s=0;
        cin>>k;
        l=k+1;
       j= n/l;
       p=n%l;
       
        for( i=0;i<j;i++)
        {
            s+=a[i];
        }
        if(p>=1)
         cout<<s+a[i]<<endl;
         else 
          cout<<s<<endl;
    }
   return 0;
}
        
        
        
        
        
        
  