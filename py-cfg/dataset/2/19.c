#include <iostream>
#include <sstream>
#include <map>
using namespace std;
typedef long long int vlong;
map<vlong,vlong> cache;
vlong sub_lead(vlong x)
{
    ostringstream oss;
    oss<<x;
    istringstream iss(oss.str());
    string s  ="",b;
    iss>>b;
    s += b[0];
    istringstream iss1(s);
    int y;
    iss1>>y;
    return x - y;
    
}
vlong return_corr(vlong k)//Key , Value this takes in Key and returns value
{
 if(k==0) return 1;
 else if(cache.find(k)!=cache.end())return cache[k];
 else
 {
   vlong sum = 1;
   vlong ans = sum +return_corr(sub_lead(k));
   cache[k] = ans;
   return ans;
 }
}
vlong get_info(vlong n)
{
    vlong ans;
  for(vlong i = 9;;i++)
  {
      if(return_corr(i) == n )
      return i;
  }
  
}
int main()
{
  short int test;
  cin>>test;
  vlong array[test];
  
  for(int i =0;i<test;i++)
  {
      cin>>array[i];
      
  }
  for(vlong a :array)
  {
      cout<<get_info(a)<<endl;
  }
}