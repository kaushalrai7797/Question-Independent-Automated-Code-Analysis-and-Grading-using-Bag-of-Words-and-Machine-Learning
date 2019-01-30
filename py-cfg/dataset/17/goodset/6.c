#include<stdio.h>
#include<stdlib.h>
 
int main(){
   int t,n,a,i=0,p;
   int* m;
   long long sum=0;
   scanf("%d",&t);
   while(t-- > 0){
            scanf("%d",&n);
            scanf("%d",&a);
            m=(int*)malloc(sizeof(int)*a);
            sum=0;
            for(i=0;i<a;i++){
               scanf("%d",m+i);
               sum=sum+m[i];
            }
            sum=(n*(n+1))/2-sum;
            scanf("%d",&p);
            if(n%2==0)
             n=n/2;
            else
             n=(n+1)/2;
            double res=(double)sum*(n-p)/n;
            printf("%.4lf\n",res);
                      free(m);
   }
return 0;
}