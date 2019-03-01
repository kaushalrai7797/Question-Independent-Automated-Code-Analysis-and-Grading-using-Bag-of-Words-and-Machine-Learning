#include <stdio.h>

int main(void) {
	int T,N,K,S,i,n,buy=1,flag=0,stock=0;
	
	
	scanf("%d",&T);
	while(T--){
	    int buy=1,flag=0,stock=0;
	    scanf("%d%d%d",&N,&K,&S);
	    n=N;
	    
	    if(K>N){
	        printf("-1");break;flag=1;
	    }
	    else{
	        for(i=1;i<=S;i++){
	            
	            if(n>=K){
	                n=(n-K);
	            }
	            
	            else if((n<K)&&(i%7==0)){
	                stock=stock+n;
	                
	                if(stock>=K){
	                    stock-=K;
	                }
	                else{
	                     printf("-1");
	                    flag=1;
	                    break;
	     
	                }
	            }
	            else if(n<K){
	                stock=stock+n;
	                
	                if(stock>=K){
	                    stock-=K;
	                }
	                else{
	                    n=N;
	                    n=n-K;
	                    buy++;
	                }
	            }
	        }
	        if(flag==0){
	            printf("%d",buy);
	        }
	    }
	    
	}
	
	return 0;
}