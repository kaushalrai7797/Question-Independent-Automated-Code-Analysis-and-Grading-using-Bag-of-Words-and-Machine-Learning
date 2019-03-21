#include <stdio.h>

int main(void) {
	// your code goes here
	int t ,a,n,i,j,temp ;
scanf(" %d",&t);
scanf(" %d",&n);
if(n>=2 && n<=5000 && t>=1 && t<=10){
long int s[n],p,q=10^9,r;

  for (i=0;i<t;i++){
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
