#include <iostream>
#include<string.h>
#include<sstream>
using namespace std;
class led{
    long int k;
public:
    string getdata(){
        cin>>k;
        if(k==1)
            return "0";
        if(k==2)
            return "9";
            if(k==3)
            return "10";
        int j;
        long int num=10,cur=10,sc=20;
        while(k>4){
                if(num>=cur*10)
                    cur*=10;
                if(num>sc)
                    sc+=10;
               j=sc/cur;
               if(num+j>=sc&&(num+10)<cur*10){
                num+=j;
               }
               else{
                num+=num/cur;
               }
                k--;
        }
        ostringstream str1;
        str1<<num;
        string s1=str1.str();
        return s1;
    }
};
int main()
{
    int t;
    cin>>t;
   led obj;
   string s,s1;
   while(t--){
   s1=obj.getdata();
   s+=s1+"\n";
   }
   cout<<s;
    return 0;
}
