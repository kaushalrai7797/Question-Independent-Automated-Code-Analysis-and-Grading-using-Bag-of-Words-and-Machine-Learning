#include <iostream>
using namespace std;

int next(unsigned long long n){
    int first;
    while(n!=0){
        n=n/10;
        if(n/10==0)
            first = n;
    }
    
    int nextdigit;
    if(first==9)
        nextdigit = 1;
    else
        nextdigit = first + 1;
        
    return nextdigit;
}

int current(unsigned long long n){
    int first;
    while(n!=0){
        n=n/10;
        if(n/10==0)
            first = n;
    }

    return first;
}

bool isboundary(unsigned long long n){
    int first;
    int size=0;
    while(n!=0){
        n=n/10;
        if(n/10==0)
            first = n;
        size++;
    }
    
    unsigned long long nextnum = first + 1;
    
    for(int i=0;i<size-1;i++){
        nextnum*=10;
    }
    
    int nextdigit;
    
    if(first==9)
        nextdigit = 1;
    else
        nextdigit = first + 1;
    
    if(nextnum-nextdigit == n)
        return true;
    else
        return false;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    unsigned long long k;
	    cin>>k;
	    unsigned long long num = 9;
	    for(int j=2;j<k;j++){
	        
	        if(num==9)
	           num=10;
	        else if(isboundary(num))
	           num = num + next(num);
	        else
	           num = num + current(num);
	    }
	   
	    cout<<num;
	}
	return 0;
}

