#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    int i, j, size, nr, mid, nr_zero;
    unsigned long given_num;
    bool increased;
    char buffer[1000001];

	// your code goes here
	scanf("%d", &nr);
	for(i = 0 ; i < nr ; i++){
	    scanf("%s", buffer);
	    nr_zero = 0;
	    //while(buffer[nr_zero] == '0') nr_zero++;

	    increased = false;
restart:
	    size = strlen(buffer)+nr_zero;
	    if(size & 1){
	        if(buffer[size/2] == '0'){
	            buffer[size/2] = '1';
	            increased = true;
	        }
	    }else{
	       if(buffer[size/2 - 1] == '0'){
	            buffer[size/2-1] = '1';
	            increased = true;
	        }
	    }

        for(j = size/2 - 1 ; j >= nr_zero ; --j ){
	    /*if(buffer[j] == '0'){
	        buffer[j] = '1';
	        increased = true;
	    }
	    if(buffer[j] == '0'){
	        buffer[j] = '1';
	        increased = true;
	    }*/
	    if((buffer[j] < buffer[size - 1 - j]) && !increased){
	       //All previous numbers are same.
	       mid = size/2;
	       if(!(size & 1)) mid -= 1;
	       while(++buffer[mid] > '9'){
	        buffer[mid] = '0';
	        mid -= 1;
	       }
	       j = mid + 1;
	       increased = true;
	       continue;
	    }else if(buffer[j] > buffer[size - 1 - j]){
	       increased = true;
	    }
	    buffer[size -1 - j] = buffer[j];
	   }
	   printf("%s\n", buffer+nr_zero);
	}
	return 0;
}
