#include <stdio.h>

long long gcd(long long x, long long y){
	if(y){
		return gcd(y, x%y);
	}
	return x;
}

int main(){
	long long a, b, x, y, res = 0,x1, y1, g;
	scanf("%I64d %I64d %I64d %I64d", &a, &b, &x, &y);
	if(x > y){
		g = gcd(x, y);
	} else{
		g = gcd(y, x);
	}
	x /= g;
	y /= g;
	printf("%I64d", b/y > a/x ? a/x : b/y);
}
