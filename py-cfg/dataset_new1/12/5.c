#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
	    int j, k;
	    scanf("%d", &j);
	    int a[j];
	    for(int h = 0; h < j; h++) {
	        scanf("%d", &a[h]);
	    } 
	    scanf("%d", &k);
	    int b[k];
	    for(int h = 0; h < k; h++) {
	        scanf("%d", &b[h]);
	    } int l = 0, h = 0, count = 0;
	    while(h < j) {
	        count = 0, l = 0;
	        while(l < k) {
	            if(a[h] == b[l]) {
	                count++;
	                h++;
	                l++;
	            } else {
	                break;
	            }
	        }
	        if(count == k)
	            break;
	        h++;
	    }
	    if(count == k)
	        printf("Yes\n"); 
	   else
	        printf("No\n");
	}
	return 0;
}

