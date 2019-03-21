#include <stdio.h>

unsigned int get_min(unsigned int left, unsigned int right)
{
    unsigned  mid = 0;
    unsigned length;

    mid = (right-left)/2;
    mid = left + mid;

    length = (mid - left) + (right - mid);

    if((mid - left) > 1) {
        length = length + get_min(left, mid);
    }

    if((right - mid) > 1) {
        length = length + get_min(mid, right);
    }
    return length;
}

unsigned int get_max(unsigned int left, unsigned int right)
{
    unsigned int mid = 0;
    unsigned int length;

    mid = left + 1;

    length = (mid - left) + (right - mid);
    if((right - mid) > 1) {
        length = length + get_max(mid, right);
    }
    return length;
}

int main(void)
{
    unsigned int T, N, M;
    unsigned int max,min;
    int res;

    scanf("%d",&T);

    while(T) {
        scanf("%d",&N);
        scanf("%d",&M);
        max = get_max(0, N+1);
        min = get_min(0, N+1);
        if(M > max) {
            res = (M - max);
        } else if( M < min) {
            res = -1;
        } else {
            res = 0;
        }
        printf("%d\n",res);
        T--;
    }

}
