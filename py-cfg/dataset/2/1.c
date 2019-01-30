#include <iostream>
#include<string.h>
#include<sstream>
#include<stdio.h>
using namespace std;
class led{
    long int w;
public:
    string getdata(){
        cin>>w;
        if(w==1)
            return "0";
        if(w==2)
            return "9";
            if(w==3)
            return "10";
        int j;
        long int num=10,cur=10,k=3;
        int curd=1;
        //w-=2;
      while(k<w){
            if(curd==10)
            curd=1;
                    int f=num%10;
                    int avail=cur-f-(curd+1);
                    int add=avail/curd;
                    if(w-k>add){
                    num+=add*curd;
                    k+=add;
                    if(num+curd<(curd+1)*cur){
                        num+=curd;
                        k++;
                        if(k<w){
                        num+=curd+1;
                        curd++;
                        k++;
                    }
                    }
                    else{
                        num+=curd+1;
                        curd++;
                        k++;
                    }
                }
                else{
                    num+=(w-k)*curd;
                    k=w;
                }
                if(num>=cur*10)
                    cur*=10;
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
    scanf("%d",&t);
   led obj;
   string s,s1;
   while(t--){
   s1=obj.getdata();
   s+=s1+"\n";
   }
   cout<<s;
    return 0;
}
