#include <bits/stdc++.h>
using namespace std;

typedef long long Long;
typedef unsigned long long Ulong;
typedef long double Double;

const int MAXN = 1005;

int Pages,T,F;
int MARK[MAXN];
Double DP[MAXN][MAXN];

Double compute(int pagesLeft,int toBeRemoved) {
	if (pagesLeft <= toBeRemoved) return 0.0;
	if (DP[pagesLeft][toBeRemoved] >= 0.0)
		return DP[pagesLeft][toBeRemoved];
	Double p = static_cast<Double>(toBeRemoved)/
			   static_cast<Double>(pagesLeft);
	Double exp = 0.0;
	if (pagesLeft >= toBeRemoved) {
		exp = exp + p*compute(pagesLeft-1,toBeRemoved-1);
	}
	Double curContrib = 0.0;
	if (!MARK[pagesLeft*2-1]) curContrib += (2.0*pagesLeft-1.0);
	if (!MARK[pagesLeft*2]) curContrib += (2.0*pagesLeft);
	exp = exp + (1.0-p)*(compute(pagesLeft-1,toBeRemoved)+curContrib);
	return DP[pagesLeft][toBeRemoved] = exp;
}

int main() {
	int T; scanf("%d",&T);
	while (T--) {
		int P; scanf("%d",&P);
		Pages = (P+1)/2;
		fill(MARK+1,MARK+1+P,false);
		MARK[0] = true;

		if (P % 2 == 1)
			MARK[2*Pages] = true;
		
		scanf("%d",&F);
		for (int i=1; i<=F; ++i) {
			int pg; scanf("%d",&pg);
			MARK[pg] = true;
		}
		scanf("%d",&T);
		assert(T <= Pages);
		for (int p=0; p<=Pages; ++p) {
			for (int r=0; r<=T; ++r) {
				DP[p][r] = 0.0;
			}
		}
		for (int p=1; p<=Pages; ++p) {
			for (int r=0; r<=min(p,T); ++r) {
				if (p == r) {
					DP[p][r] = 0.0;
					break;
				}
				DP[p][r] = 0.0;
				Double prob = (1.0*r)/p;
				Double curContrib = 0.0;
				if (!MARK[2*p-1]) curContrib += (2.0*p-1.0);
				if (!MARK[2*p]) curContrib += (2.0*p);
				DP[p][r] = (1.0-prob)*(DP[p-1][r]+curContrib);
				if (r-1 >= 0)
					DP[p][r] += DP[p-1][r-1]*prob;
			}
		}
		printf("%.12Lf\n",DP[Pages][T]);
	}
	return 0;
}