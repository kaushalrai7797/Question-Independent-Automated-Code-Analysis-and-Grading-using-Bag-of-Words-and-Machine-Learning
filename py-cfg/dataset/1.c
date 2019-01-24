#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __unix__
#define gc getchar_unlocked
#define pc putchar_unlocked
#else
#define gc getchar
#define pc putchar
#endif

int read_uint() {
    unsigned int digit;
    while (!isdigit(digit = gc()));
    unsigned int n = digit - '0';
    while (isdigit(digit = gc())) {
        n = n * 10 + digit - '0';
    }
    return n;
}

int main() {
    int t= read_uint();
    while (t--) {
        int n = read_uint();
        int k = read_uint();
        int height = 0;
        int steps = 0;
        while (n--) {
        	int h = read_uint();
        	steps += (h - height - 1) / k;
        	height = h;
		}
		printf("%d\n", steps);
    }
    return EXIT_SUCCESS;
}
