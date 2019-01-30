#include<stdio.h>
#include<string.h>

int is_subseq(char A[], int Alen, char a[], int alen) {
    int I = 0, i = 0;
    while(i<alen && I<Alen) {
        if(A[I] == a[i]) i++;
        I++;
    }
    if(i == alen) return 1;
    return 0;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char m[25000], w[25000];
        scanf("%s %s", m, w);
        int mlen = strlen(m), wlen = strlen(w);
        int found = 0;
        if(mlen < wlen) {if(is_subseq(w, wlen, m, mlen)) found = 1;}
        else {if(is_subseq(m, mlen, w, wlen)) found = 1;}
        if(found) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
