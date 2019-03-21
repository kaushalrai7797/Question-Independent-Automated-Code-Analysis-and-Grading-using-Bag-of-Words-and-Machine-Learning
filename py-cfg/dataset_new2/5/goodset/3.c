/*  Code Chef
    The Next Palindrome
    Problem Code: PALIN
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char word[]);

int compare (char num[], int size);

int main (void)
{
    int n_cases, x;

    scanf("%d", &n_cases);

    char num[1000002];

    for(x=0; x<n_cases; ++x)
    {
        scanf("%s", num);

        int size = strlen(num);

        int i, flag=1;

        for(i=0; i<size; i++)
        {
            if(num[i]!='9')
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
        {
            num[0]='1';

            for(i=1; i<size; i++)
            {
                num[i]='0';
            }

            num[size]='1';
            num[size+1]='\0';

            printf("%s\n", num);
        }


        else
        {

            /* Reverse copy the numbers*/
            if(compare(num, size)== 1)
            {
                for(i=size/2-1; i>=0; i--)
                {
                    num[size-1-i] = num[i];
                }

                printf("%s\n", num);
            }

            /* Compute the next palindrome */

            else
            {
                if(num[(size-1)/2]!='9')
                {
                    num[(size-1)/2]++;
                }

                else
                {
                    for(i=0; i<=(size-1)/2; i++)
                    {
                        num[(size-1)/2-i]='0';

                        if(num[(size-1)/2-1-i]!='9')
                        {
                            num[(size-1)/2-1-i]++;
                            break;
                        }
                    }

                }

                for(i=size/2-1; i>=0; i--)
                {
                    num[size-1-i] = num[i];
                }

                printf("%s\n", num);
            }
        }
    }
}

int compare (char num[], int size)
{
    int i;

    for(i=size/2-1; i>=0; i--)
    {
        if(num[i] > num[size-1-i])
        {
            return 1;
        }

        else if(num[i] != num[size-1-i])
        {
            return -1;
        }
    }

    return 0;
}
