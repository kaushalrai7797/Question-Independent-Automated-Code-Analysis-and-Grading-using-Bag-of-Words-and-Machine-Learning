#include "bits/stdc++.h"
using namespace std;
#define rep(i,j) for(int i=0; i<(int)j; ++i)
int T, nodes[101], inputs[101][2];
const int IN=0, OR=1, AND=2;
double memo[101][2], p;

double culc_memo(int n, int onoff){
    if(memo[n][onoff] >  -0.1) return memo[n][onoff];
    if(nodes[n]==IN){
        if(onoff) return memo[n][1] = p;
        else return memo[n][0] = 1.0-p;
    }
    double res = 0.0;
    if(nodes[n]==OR){
        if(onoff){
            res = 1.0 - culc_memo(inputs[n][0], 0) * culc_memo(inputs[n][1], 0);
        }else{
            res = culc_memo(inputs[n][0], 0) * culc_memo(inputs[n][1], 0);
        }
    }
    if(nodes[n]==AND){
        if(onoff){
            res = culc_memo(inputs[n][0], 1) * culc_memo(inputs[n][1], 1);
        }else{
            res = 1.0 - culc_memo(inputs[n][0], 1) * culc_memo(inputs[n][1], 1);
        }
    }
    return memo[n][onoff] = res;
}
int main(){cin>>T;while(T--){
    int N; cin>>N;
    rep(i, N){
        cin>>nodes[i+1];
        if(nodes[i+1]) cin>>inputs[i+1][0]>>inputs[i+1][1];
    }
    double ans = p, mindiff=2.0;
    rep(t, 100001){
        rep(i, N+1)rep(j, 2) memo[i][j] = -1.0;
        p = 0.00001 * t;
        double res = culc_memo(N, 1);
        double diff = fabs(res - 0.5);
        if(diff<mindiff) ans = p, mindiff = diff;
    }
    printf("%0.5f\n", ans);
}}