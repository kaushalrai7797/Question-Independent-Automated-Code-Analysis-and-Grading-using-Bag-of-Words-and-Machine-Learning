#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long int T,c=1,t,n[10],k[10],x,i,j,p=0;
    vector <long int> v;
    long int arr[10][10000]={0};        
    cin>>t;
    T=t;    
    while(t--)
    { 
        cin>>n[p];
        cin>>k[p];
        arr[p][0]=1; 
        for(i=0; i<k[p] ; i++)
        {
            cin>>x;
            v.insert(v.begin()+i,x);
        }
         if((k[p]==1 && n[p]!=1)||(k[p]==2&&v[1]-v[0]!=1))
        {
            arr[p][0]=0;
            p++;
            continue;
        }
        if(k[p]==1&&n[p]==1)
        {
            arr[p][0]=2;
            p++;
            continue;
        } 
        
        int ko=n[p];
        for(i=1;i<v[0];i++)
                arr[p][i]=ko--;             
        for(i=v[0]+1;i<v[1];i++)
                arr[p][i]=ko--;  
        for(i=k[p]-1;i>=0;i--)
                arr[p][v[i]]=ko--;
        for(i=v[1]+1;i<=n[p];i++)
        {
            if(arr[p][i]==0)
                    arr[p][i]=ko--;
        }
        p++;
    }   
    
    cout<<endl;
    t=T;
    T=0;
    while(T<t)
    {
     if(arr[T][0]==0)
     cout<<"NO"<<endl;
     else if (arr[T][0]==1)
     {
         cout<<"YES"<<endl;
         for(i=1;i<=n[T];i++)
              cout<<arr[T][i]<<" ";
              cout<<endl;
     }
     else if(arr[T][0]==2)        
       cout<<"YES"<<endl<<"1"<<endl;
     T++; 
    }
    return 0;
}
         
    
    
