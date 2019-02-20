#include <stdio.h>

int main() {
    int T, N, i, answer, flag, L[100000], G[100000];
    scanf("%d", &T);
    while (T--){
        answer = 0;
        scanf("%d", &N);
        for (i = 0; i < N; i++)
            scanf("%d", L + i);
        for (i = 0; i < N; i++)
            scanf("%d", G + i);
        flag = 1;
        for (i = 0; i < N; i++)
            if (*(L + i) > *(G + i)){
                flag = 0;
                break;
            }
        if (flag)
            answer += 1;
        flag = 1;
        for (i = 0; i < N; i++){
            if (*(L + i) > *(G + N - 1 - i)){
                flag = 0;
                break;
            }
        }
        if (flag)
            answer += 2;

        if (answer == 3)
            printf("both\n");
        else if(answer == 2)
            printf("back\n");
        else if(answer == 1)
            printf("front\n");
        else
            printf("none\n");

    }
    return 0;
}
