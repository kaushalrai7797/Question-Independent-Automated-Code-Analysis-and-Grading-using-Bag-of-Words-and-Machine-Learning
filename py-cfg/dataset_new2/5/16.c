#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	int t,numberString[1000000] = {-1},length, number,isNine,origNumber,pos, isIncreased;

	char n[1000000];

	scanf("%d", &t);
	while(t--) {
	    scanf("%s", n);
	    length = 0;
	    number=0;
	    isNine = 1;
	    origNumber = 0;

		// Convert String to Number
	    for(int i = 0; i < strlen(n); i++) {
	        numberString[i] = n[i] - '0';
	        origNumber = origNumber*10 + numberString[i];
	        if(numberString[i] != 9) {
	            isNine = 0;
	        }
	    }

	   // Code for Numbers between 1 to 8
	    if(origNumber >= 0 && origNumber <= 8) {
	       origNumber++;
	       printf("%d\n",origNumber);
	       continue;
	    }

		//Code for Numbers having all 9's
	    else if(isNine == 1)  {
	        origNumber += 2;
	        printf("%d\n",origNumber);
	        continue;
	    }

	    //Code for Numbers between 10 to 98
	    else if (origNumber >= 10 &&  origNumber <= 98) {
	        if(numberString[0] < numberString[1]) {
	            numberString[0]++;
	            numberString[1] = numberString[0];
	        }
	         else if(numberString[0] == numberString[1]) {
	            numberString[0] = numberString[1] = numberString[0]+1;
	         }
	         else {
	             numberString[1] = numberString[0];
	         }
	    }

	    //Code for other numbers
	    else {
			length = strlen(n);

			//Increase middle element
			if(length%2 != 0) {
				if(numberString[length/2-1] <= numberString[length/2+1]) {
					numberString[length/2]++;
					if(numberString[length/2] == 10) {
						int temp=0;
						for(int i=0; i <= length/2 ; i++) {
							temp = temp*10 + numberString[i];
						}
						temp = temp + 1;
						for(int i= length/2 ;i >= 0; i--) {
							numberString[i] = temp%10;
							temp /= 10;
						}
					}
				}
			}

			//Make both middle elements same
			else {
				if(numberString[length/2] > numberString[length - 1 - length/2])
					numberString[length - 1 - length/2] = numberString[length/2];
				else
					numberString[length/2] = numberString[length - 1 - length/2];
			}
			//Copy Left string to right
			for(int i=length/2-1; i >= 0; i--) {
				numberString[length-1-i] = numberString[i];
			}
		}




    	number = 0;
    	for(int i = 0; i < strlen(n) ; i++) {
	        number = number*10 + numberString[i];
    	}

	    printf("%d\n",number);
	}
	return 0;

	/*
	    else {
	        length = strlen(n);

	        isIncreased = 0;
	        for(int i=length/2 ; i >= 0 ; i--) {
	            if(numberString[i] == numberString[length-1-i]) {
    	            ;
    	        }
    	        else if(numberString[i] < numberString[length-1-i]) {
    	            if(isIncreased == 0) {
    	                numberString[i] = numberString[length-1-i] = numberString[i]+1;
    	                isIncreased = 1;
    	            }
    	            else {
    	                numberString[length-1-i] = numberString[i];
    	            }
    	        }
    	        else {
        	       numberString[length-1-i] = numberString[i];
        	       isIncreased = 1;
    	        }

	        }
			*/
	       /*
    	    for(int i=0 ; i < length/2 ; i++) {
    	        if(numberString[i] == numberString[length-1-i]) {
    	            ;
    	        }
    	        else if(numberString[i] < numberString[length-1-i]) {
    	            if(i != 0)
    	                numberString[i] = numberString[length-1-i] = numberString[i]+1;
    	           else
    	                numberString[length-1-i] = numberString[i];
    	        }
    	        else
    	            numberString[length-1-i] = numberString[i];
    	   }

    	   number = 0;
    	   for(int i = 0; i < strlen(n) ; i++) {
    	        number = number*10 + numberString[i];
        	}

    	   if(number == origNumber){
				//printf("orig num : %d , num : %d\n", origNumber, number);
				pos = length/2;
				if(length%2==0){
					numberString[pos] = numberString[pos -1] = numberString[pos]+1;
				}
				else{
					numberString[pos]++;// = numberString[pos]+1;
				}

				if(numberString[pos] == 10) {
					numberString[pos+1]++;
					numberString[length-2-pos]++;
					numberString[pos] = numberString[length-1-pos] = 0;
				}


				if(numberString[pos] == 10) {
					numberString[pos-1]++;
					numberString[length-pos]++;
					numberString[pos] = numberString[length-1-pos] = 0;
				}

			}
			*/
}
