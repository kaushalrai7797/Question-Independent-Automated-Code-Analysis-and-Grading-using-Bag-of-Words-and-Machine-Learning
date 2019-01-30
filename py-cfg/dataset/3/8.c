#include <map>
#include <set>
#include <ctime>
#include <cmath>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
inline int read(){int now=0;register char c=getchar();for(;!isdigit(c);c=getchar());
for(;isdigit(c);now=now*10+c-'0',c=getchar());return now;}
#define For(i, x, y) for(int i=x;i<=y;i++)  
#define _For(i, x, y) for(int i=x;i>=y;i--)
#define Mem(f, x) memset(f,x,sizeof(f))  
#define Sca(x) scanf("%d", &x)
#define Sca2(x,y) scanf("%d%d",&x,&y)
#define Sca3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define Scl(x) scanf("%lld",&x);  
#define Pri(x) printf("%d\n", x)
#define Prl(x) printf("%lld\n",x);  
#define CLR(u) for(int i=0;i<=N;i++)u[i].clear();
#define LL long long
#define ULL unsigned long long  
#define mp make_pair
#define PII pair<int,int>
#define PIL pair<int,long long>
#define PLL pair<long long,long long>
#define pb push_back
#define fi first
#define se second 
typedef vector<int> VI;
const double eps = 1e-9;
const int maxn = 1e6 + 10;
const LL INF = 3e18;
const int mod = 1e9 + 7; 
int N;
char MAP[5][5];
char str[50][5];
int a[35];
bool find(char x[]){
	for(int i = 1; i <= 4; i ++){
		if(MAP[i][1] == x[1] && MAP[i][2] == x[2] && MAP[i][3] == x[3]
		&& MAP[i][4] == x[4]) return true;
		if(MAP[i][1] == x[4] && MAP[i][2] == x[3] && MAP[i][3] == x[2]
		&& MAP[i][4] == x[1]) return true;
		if(MAP[1][i] == x[1] && MAP[2][i] == x[2] && MAP[3][i] == x[3]
		&& MAP[4][i] == x[4]) return true;
		if(MAP[1][i] == x[4] && MAP[2][i] == x[3] && MAP[3][i] == x[2]
		&& MAP[4][i] == x[1]) return true;
	}
	return false; 
}
bool check(){
	for(int i = 1; i <= N ; i ++){
		if(!find(str[i])) return false;
	}
	return true;
}
int main(){
	int T; Sca(T);
	while(T--){
		Sca(N);
		for(int i = 1; i <= N ; i ++) scanf("%s",str[i] + 1);
		if(N <= 4){
			for(int i = 1; i <= N; i ++){
				printf("%s\n",str[i] + 1);
			}
			for(int i = N + 1;  i <= 4; i ++){
				printf("AAAA\n");
			}
			continue;
		}
		for(int i = N - 3; i <= N; i ++){
			a[i] = 4 - N + i;
		}
		int flag = 0;
		do{
			for(int i = 1; i <= N ; i ++){
				if(a[i]){
					for(int j = 1; j <= 4; j ++) MAP[a[i]][j] = str[i][j];
				}		
			}
			if(check()){
				for(int i = 1; i <= 4; i ++){
					for(int j = 1; j <= 4; j ++){
						cout << MAP[i][j];
					}
					cout << endl;
				}
				flag = 1;
				break; 
			}
		}while(next_permutation(a + 1,a + 1 + N));
		if(!flag){
			printf("grid\nsnot\nposs\nible\n");
		}
	}
	return 0;
}