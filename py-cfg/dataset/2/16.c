#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
        int M,output=10;
        cin>>M;
        int constant=10;
        if(M==1){
             cout<<0<<endl;
        }
        else if(M==2){
            cout<<9<<endl;
        }
        else if(M==3){
            cout<<10<<endl;
        }
        else{
            for(int i=4;i<=M;i++){
                if(output/constant>=1&&output/constant<=9){
                    output=output+output/constant;
                }    
                else{
                    constant*=10;
                }
            }
            cout<<output<<endl;
        }
    }
}