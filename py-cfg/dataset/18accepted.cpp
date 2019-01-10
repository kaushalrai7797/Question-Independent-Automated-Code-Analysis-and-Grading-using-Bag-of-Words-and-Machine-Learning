#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long int t,n,k,i,x;
       cin>>t;
     while(t--)
    { 
        cin>>n;
        cin>>k;
        long int v[k];
        long int arr[n+1] ={0}; 
        for(i=0; i<k ; i++)
        {
            cin>>v[i];
         }         
         if((k==1 && n!=1)||(k==2 && v[1]-v[0]!=1))
        {
            cout<<"NO\n";
            
            continue;
        }
        if(k==1 && n==1)
        {
            cout<<"YES"<<endl<<" 1 \n";
            continue;
        } 
        
        int ko=n;
        for(i=1;i<v[0];i++)
                arr[i]=ko--;            
        while(++i<v[1])
               arr[i]=ko--;  
        for(i=k-1;i>=0;i--)
                arr[v[i]]=ko--;
        for(i=v[1]+1;i<=n;i++)
        {
            if(arr[i]==0)
               arr[i]=ko--;
        }
        cout<<"YES \n";
        for(i=1;i<=n;i++)
              cout<<arr[i]<<" ";
        cout<<endl;

    }   
    
    return 0;
}
         
    
    