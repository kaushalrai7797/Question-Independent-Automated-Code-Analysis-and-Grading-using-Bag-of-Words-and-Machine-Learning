#include <stdio.h>

typedef unsigned long long int UINT;

UINT findCombinations(int n, int r) {
    r = (r > n-r)? n-r:r; //Because nCr == nC(n-r)
    UINT result = 1;
    //finding nCr in this loop
    for(int i=1;i<=r;i++) {
        result *= n--;
        result /= i;
    }
    return result;
}

int main(void) {
	int t, n, k;
	scanf("%d", &t);
	for(int i=0;i<t;i++) {
	    scanf("%d", &n);
	    scanf("%d", &k);

	    /*
	    * Here we are passing n-1, k-1, because after fixing a color we are trying to find all the combinations possible to pick k-1 colors marbles from n-1 marcbles.
	    * So we are finding nCr with n-1 and k-1
	    */

	    printf("%llu\n", findCombinations(n-1, k-1));
	}

	return 0;
}
