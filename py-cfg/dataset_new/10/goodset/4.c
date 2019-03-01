#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	// your code goes here
	int Testcase=0,i=0,j=0,countS=0,countM=0,Len=0;
	char animal[100];
	scanf("%d",&Testcase);
	while(Testcase--)
	{scanf("%s",animal);
	
	Len=strlen(animal);
	countM=0;
	countS=0;
	    for(i=0;i<Len;i++){
	        if(animal[i]=='m' )
	                {   if(animal[i-1]=='s')
	                    {animal[i-1]='k';
	                    countM++;
	                    
	                    }
	                    else if(animal[i+1]=='s')
	                    {animal[i+1]='k';
	                    countM++;
	                   
	                    }
	                    
	                }
	        if(animal[i]=='s'||animal[i]=='k')
	                 countS++;
	               
	        }
	        
	        Len=Len-countM;
	        countS=countS-countM;
	        if(countS==(Len-countS))
	            printf("tie\n");
	            else if(countS<(Len-countS))
	                printf("mongooses\n");
	                else 
	                 printf("snakes\n");
	                 
	     
	            
	
	    
	}
	return 0;
}

