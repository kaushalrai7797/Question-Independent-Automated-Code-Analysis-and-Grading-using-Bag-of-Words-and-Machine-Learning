#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char n[1000000],temp[1000000];
	int t,len,allNine,from,isIncreased;
	scanf("%d", &t);

	for(int i=1; i <=t ; i++) {
		scanf("%s",n);
		len = strlen(n);

		isIncreased = 0;
		allNine = 1;
		for(int i =  0; i <len ; i++) {
			temp[i] = n[i];
			if((n[i]-'0') != 9)
				allNine = 0;
		}
		for(int i = 0 ; i < len/2 ; i++) {
			n[len -1 -i] = n[i];
		}

		if(allNine == 1) {
			printf("1");
			for(int i = 1; i <=len - 1; i++) {
			    //printf("allNine True");
			    printf("0");
			}

			//printf("allNine True");
			printf("1\n");
			continue;
		}
		for(int i = 0 ; i < len ; i++) {
			if(n[i] > temp[i]) {
				isIncreased = 1;
				break;
			}
			else if(n[i] < temp[i]) {
			    isIncreased = 0;
			    break;
			}
		}

		if(!isIncreased) {
			from = 0;

			if(len%2 == 0)
				from = len/2 -1;
			else
				from = len/2;
			for(int i = from; i >=0; i--) {
				if(n[i] == '9') {
					n[i] = n[len - 1 - i]= '0';

				}
				else {
					n[i] = n[len - 1 - i] = ((n[i]-'0') + 1) + '0';
					break;
				}
			}
		}
		printf("%s\n",n);
	}
}
