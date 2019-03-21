#include <stdio.h>

int main() {
	// your code goes here
	long int t ,a,n,i,j,temp ;
scanf(" %ld",&t);

if( t>=1 && t<=10){

  for (i=0;i<t;i++){
      scanf(" %ld",&n);
      if( t<41 && t>10){
        break;
      }
      long int s[n],p,q=10^9,r;

    for (j=0;j<n;j++){
        scanf(" %ld",&s[j]);
        if(s[j]<1 && s[j]> 1000000000 ){
            break;
        }

    }while(1){
        a=0;

    for (j=0;j<n-1;j++){
        if (s[j]>s[j+1]){
                a=1;
            temp = s[j];
            s[j] = s[j+1];
        s[j+1]=temp;
        }

    }
    if(a==0){
            break ;
        }
    }

     q=100000000000;
    for (j=0;j<n-1;j++){
        p=s[j+1]-s[j];

        if(q>p){
            q=p;
        }
    }
     printf(" %ld \n ", q);
   }
}

	return 0;
}
