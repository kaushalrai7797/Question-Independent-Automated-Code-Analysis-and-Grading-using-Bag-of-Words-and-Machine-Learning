#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int find_seqln(long long int no){
        long long int constant=10,value=0;
        while(no>0){
                constant=10;
                while(no/constant!=0){
                    constant*=10;
                }
                constant/=10;
                 long int frstdigit=no/constant;
                 constant=frstdigit*constant;
                long int remain=no%constant;
                long int casespossible=remain/frstdigit;
                value+=casespossible;
                no-=casespossible*frstdigit;;
               
                no-=frstdigit;
                ++value;
                

        }
        return (value+1);
        
}

long long int find_seq(long long int desired){
    long int right=desired*10;
    long int left=desired;
    long int mid=(left+right)/2;
    long long output=find_seqln(mid);
    while(output!=desired){
       if(output<desired) left=mid;
        else right=mid;
        mid=(left+right)/2;
        output=find_seqln(mid);
        
    }
    while(output==desired){
        mid++;
        output=find_seqln(mid);

    }
    return(mid-1);

}
int main(){
    long int testcases;
    cin>>testcases;
     for(long int i=0;i<testcases;i++){
        long long int desired;
        cin>>desired;
        long long int output=find_seq(desired);
        cout<<output<<endl;
    }
}