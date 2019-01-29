#include<stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   int q,n,num,k;
   cin>>q;
   while(q--)
   {
       cin>>n>>k;
       int harr[n+1],arr[k];
       for(int i=0;i<=n;i++) harr[i]=0;
       for(int i=0;i<k;i++)
       {
           cin>>arr[i];
           harr[arr[i]]++;
       }

       if(k>n)
       {
           cout<<"NO\n";
           continue;
       }
       else if(n==2 && k==1)
       {
           cout<<"NO\n";
           continue;
       }
       else cout<<"YES\n";

       for(int i=0;i<k-1;i++) cout<<arr[i]<<' ';
       cout<<n<<' ';
       harr[arr[k-1]]=0;
       for(int i=n-1;i>0;i--)
       {
           if(harr[i]==0)
            cout<<i<<' ';
       }
       cout<<"\n";
   }
    return 0;
}