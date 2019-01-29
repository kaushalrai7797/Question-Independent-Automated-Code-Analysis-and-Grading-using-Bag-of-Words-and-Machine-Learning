#include <iostream>

#include<iomanip>
using namespace std;

void polymultiply(int *a1,int *a2,int *o1,int *o2,int n1,int n2){
    for(int i=n1+n2;i>=0;i--){
        o1[i]= 0;
    }
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            o1[i+j]+=a1[i]*a2[j];
            
        }
    }
    for(int i=n1+n2;i>=0;i--){
        o2[i]= -o1[i];
    }
    o2[0]++;
    return;
}
double findpoly(int *a1,double j,int n){
    double poly=a1[n];
    for(int i=n-1;i>=0;i--){
        poly*=j;
        poly+=a1[i];
    }
    return poly;
}

double root(int *a,int n){
    
    
    double j=0;
    
    while(findpoly(a,j,n)<=0.5){
        j+=0.1;
    }
    j-=0.1;
    while(findpoly(a,j,n)<=0.5){
        j+=0.01;
    }
    j-=0.01;
    while(findpoly(a,j,n)<=0.5){
        j+=0.001;
    }
    j-=0.001;
    while(findpoly(a,j,n)<=0.5){
        j+=0.0001;
    }
    j-=0.0001;
    while(findpoly(a,j,n)<=0.5){
        j+=0.00001;
    }
    j-=0.00001;
    while(findpoly(a,j,n)<=0.5){
        j+=0.000001;
    }
    j-=0.000001;    
        
    //cout<<j<<endl;
   // while(cprabs(e,k)){
        
     //   e=(0.5-findpoly(a,j,n))/(findpoly(b,j,n-1));
     //   j+=e;
   // }
    return j;
}
int main() {
   // cout<<"this ran";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *degree=new int[n];
        int **poly=new int*[n];
        int **npoly=new int*[n];
        int type,i1,i2;
        //cout<<"this ran";
        for(int i=0;i<n;i++){
            //cout<<"this ran";
            cin>>type;
            //cout<<"this ran";
            switch(type){
                case 0:
                degree[i]=1;
                poly[i]=new int[2];
                npoly[i]=new int[2];
                //cout<<"this ran";
                poly[i][1]=1;
                poly[i][0]=0;
                //cout<<"this ran";
                npoly[i][1]=-1;
                npoly[i][0]=1;
                //cout<<"this ran";
                break;
                case 1:
                cin>>i1>>i2;
                i1--;i2--;
                //cout<<"this ran";
                degree[i]=degree[i1]+degree[i2];
                poly[i]=new int[degree[i]+1];
                npoly[i]=new int[degree[i]+1];
                polymultiply(npoly[i1],npoly[i2],npoly[i],poly[i],degree[i1],degree[i2]);
                break;
                case 2:
                   cin>>i1>>i2;
                i1--;i2--;
                //cout<<"this ran";
                degree[i]=degree[i1]+degree[i2];
                poly[i]=new int[degree[i]+1];
                npoly[i]=new int[degree[i]+1];
                polymultiply(poly[i1],poly[i2],poly[i],npoly[i],degree[i1],degree[i2]);
                break;
                default:
                cout<<"error";
            }
            //for(int k=0;k<=degree[i];k++){
               // cout<<poly[i][k]<<"\t";
           // }
           // cout<<endl;
          //  cout<<"this ran";
        }
        double banana=root(poly[n-1],degree[n-1]);
        
        
        
        cout<<setprecision(5)<<banana<<endl;
        //cout<<j<<endl;
    }
	return 0;
}