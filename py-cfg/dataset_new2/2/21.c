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
	x1 = x;
	y1 = y;
	while(x1 <= a && y1 <= b){
		x1 += x;
		y1 += y;
		res++;
	}
	printf("%I64d", res);
}
