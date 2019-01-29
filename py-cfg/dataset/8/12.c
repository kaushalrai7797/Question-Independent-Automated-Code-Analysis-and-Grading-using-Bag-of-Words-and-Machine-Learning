#include<bits/stdc++.h>
using namespace std;
#define ll   int
#define in(a) scanf("%lld",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) inp(arrname[i])
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define gc getchar_unlocked
#define MAXL 1000006
#define Piar pair<ll,ll> pair
#define Piarmap map<Pair,ll>
#define Pairmapit map<Pair,ll>:: iterator 
#define maptype map<ll,ll> 
#define mapit map<ll,ll>:: iterator
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define mod 1000000007
void inp(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
ll n,t;
ll childs[1000][2];
ll typ[1000];
ll coef[100005];

double cal_p(double p,ll ind)
{
  //cout<<"__"<<ind<<endl;
   if(typ[ind]==0)
     return p;

   if(typ[ind]==2)
   {
       return cal_p(p,childs[ind][0]-1)*cal_p(p,childs[ind][1]-1);
   }

   else if(typ[ind]==1)
   {
       double p1=cal_p(p,childs[ind][0]-1);
       double p2=cal_p(p,childs[ind][1]-1);
       return  p1+p2-p1*p2;
   }
   
}

int main()
{  
  inp(t);
  while(t--)
  {
       inp(n);
       loop(i,0,n)
       { inp(typ[i]);
         if(typ[i]!=0)
          { inp(childs[i][0]); inp(childs[i][1]);}      
       } 

       double hi=1,lo=0,mid;
       
       while( lo < hi )
       {
          mid=lo+(hi-lo)/2;
          double calp=cal_p(mid,n-1);
          if(abs(calp-0.5) < 0.000001)
            break;
          else if(calp < 0.5)
            lo=mid;
          else if(calp > 0.5)
            hi=mid;
          //cout<<mid<<endl;          
       }

       printf("%0.5lf\n",mid);
  }  
 return 0;  
}
