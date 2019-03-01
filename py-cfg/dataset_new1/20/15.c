#include<stdio.h>
long calXor(long num);
int main(){
long l,r,t,res;
scanf("%ld",&t);
while(t>0){
  scanf("%ld%ld",&l,&r);
  if(l==r){
  	    res = l;
  	}
  else{
    res = calXor(r)^calXor(l-1);
    }
  if(res%2==0){
  	printf("Even\n");
  }
  else{
    	printf("Odd\n");
  }
}
}
long calXor(long num){
	switch(num%4){
		case 0 : return num;
		case 1 : return 1;
		case 2 : return num +1;
		case 3 : return 0;
	}
}