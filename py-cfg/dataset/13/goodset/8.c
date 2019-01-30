#include <stdio.h>

int main()
{
    int j, test_cases, N, sumN = 0;
    scanf("\n%i", &test_cases);
    while(test_cases--)
    {
        scanf("\n%i\n", &N);
        sumN += N;
        if (sumN <= 100000)
        {
            char array;
            long long int count = 0;
            for (j=0; j<N; j++)
            {
                scanf("%c", &array);
                if (array == '1')
                    count++;
            }
            printf("%lli\n", (count+1)*count/2);
        }
    }
    return 0;
}
