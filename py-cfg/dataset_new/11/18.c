#include <stdio.h>

int main(void) {
	int T,N,K,S,i,n,buy=1,flag=0,stock=0;
	n=N;
	
	scanf("%d",&T);
	while(T--){
	    scanf("%d%d%d",&N,&K,&S);
	    
	    if(K>N){
	        printf("-1");break;flag=1;
	    }
	    else{
	        for(i=1;i<=S;i++){
	            if((stock<K)&&(i%7==0)){
	                if(stock>=K){
	                    stock-=K;
	                }
	                else{
	                    printf("-1");
	                    flag=1;
	                    break;
	                }
	            }
	            
	            else if(stock<K){
	                if(stock>=K){
	                    stock-=K;
	                }
	                else{
	                    stock+=N; buy++;
	                }
	            }
	            
	            stock=stock+(n-K);
	            
	        }
	        if(flag==0){
	            printf("%d",buy);
	        }
	    }
	    
	}
	
	return 0;
}

