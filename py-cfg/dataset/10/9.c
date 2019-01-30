#include <stdio.h>
#include<ctype.h>
int inp(void);
void print_array(char arr[][4], int i);
void lexicograph(char a[][4][4],int i);
void equ(char a[][4][4],char b[4][4],int c);
int main()
{
    int attempt, numb_words,i ,j , k, l, z, count = 0, m, n = 0, t = 0, q = 0, a, b, d,I,J,K,L,Z,A,B,C,D;
    attempt = inp();
    while(attempt)
    {
        numb_words = inp();
        char words[numb_words][4];
        char wordsinp[numb_words][4];
        char matrix[4][4];
        char words8[8][4];
        char valid[100000][4][4];
        char answer[4][4];
        for(i = 0;i < numb_words; i++)
        {
            wordsinp[i][0] = getchar();
            wordsinp[i][1] = getchar();
            wordsinp[i][2] = getchar();
            wordsinp[i][3] = getchar();
            getchar();

        }
        for(I = 0; I < numb_words; I++)
        {
            for(J = 0; J < numb_words; J++)
            {
                if(J == I)continue;
                for(K = 0; K < numb_words;K++)
                {
                    if(K == J|| K == I)continue;
                    for(Z = 0; Z < numb_words;Z++)
                    {
                        if(Z == J|| Z == I || Z == K) continue;
                        words[0][0] = wordsinp[I][0];
                        words[0][1] = wordsinp[I][1];
                        words[0][2] = wordsinp[I][2];
                        words[0][3] = wordsinp[I][3];
                        words[1][0] = wordsinp[J][0];
                        words[1][1] = wordsinp[J][1];
                        words[1][2] = wordsinp[J][2];
                        words[1][3] = wordsinp[J][3];
                        words[2][0] = wordsinp[K][0];
                        words[2][1] = wordsinp[K][1];
                        words[2][2] = wordsinp[K][2];
                        words[2][3] = wordsinp[K][3];
                        words[3][0] = wordsinp[Z][0];
                        words[3][1] = wordsinp[Z][1];
                        words[3][2] = wordsinp[Z][2];
                        words[3][3] = wordsinp[Z][3];

                        for(m = 0, l = 4 ; m < numb_words;m++ )
                        {
                            if(m == I|| m == J|| m == K|| m == Z)
                                continue;
                            for(a = 0; a < 4; a++)
                            words[l][a] = wordsinp[m][a];
                        l++;

                        }
                        for(A = 0;A < 4; A++ )
                        {
                            words8[A][0] = words[A][0];
                            words8[A][1] = words[A][1];
                            words8[A][2] = words[A][2];
                            words8[A][3] = words[A][3];

                        }


                        for(A = 4; A < 8; A++)
                        {
                            words8[A][0] = words[A - 4][3];
                            words8[A][1] = words[A - 4][2];
                            words8[A][2] = words[A - 4][1];
                            words8[A][3] = words[A - 4][0];

                        }


                        for(i = 0; i < 8;i++)
                        {
                            for(j = 0; j < 8; j++)
                            {
                                if(j == i|| j == i+4 || j == i-4) continue;
                                for(k = 0; k < 8; k++)
                                {
                                    if(k  == i|| k == j|| k == i+4 || k == j+4 ||k == j-4 || k == i-4) continue;
                                    for(l = 0; l < 8; l++)
                                    {
                                        if( l == k|| l == j|| l == i|| l == i+4 || l == j+4 || l == k+4 ||l == i-4 || l == k-4 || l == j-4 )
                                        continue;
                                        matrix[0][0] = words8[i][0];
                                        matrix[0][1] = words8[i][1];
                                        matrix[0][2] = words8[i][2];
                                        matrix[0][3] = words8[i][3];
                                        matrix[1][0] = words8[j][0];
                                        matrix[1][1] = words8[j][1];
                                        matrix[1][2] = words8[j][2];
                                        matrix[1][3] = words8[j][3];
                                        matrix[2][0] = words8[k][0];
                                        matrix[2][1] = words8[k][1];
                                        matrix[2][2] = words8[k][2];
                                        matrix[2][3] = words8[k][3];
                                        matrix[3][0] = words8[l][0];
                                        matrix[3][1] = words8[l][1];
                                        matrix[3][2] = words8[l][2];
                                        matrix[3][3] = words8[l][3];

                                        for(m = 4; m < numb_words; m++)
                                        {

                                            if((words[m][0] == matrix[0][0]&&
                                                words[m][1] == matrix[1][0]&&
                                               words[m][2] == matrix[2][0]&&
                                               words[m][3] == matrix[3][0])||(words[m][0] == matrix[0][1]&&
                                                words[m][1] == matrix[1][1]&&
                                                words[m][2] == matrix[2][1]&&
                                                words[m][3] == matrix[3][1])||(words[m][0] == matrix[0][2]&&
                                                words[m][1] == matrix[1][2]&&
                                                words[m][2] == matrix[2][2]&&
                                                words[m][3] == matrix[3][2])||(words[m][0] == matrix[0][3]&&
                                                words[m][1] == matrix[1][3]&&
                                                words[m][2] == matrix[2][3]&&
                                                words[m][3] == matrix[3][3]) )
                                                    count++;
                                            else if((words[m][0] == matrix[3][0]&&
                                                words[m][1] == matrix[2][0]&&
                                                words[m][2] == matrix[1][0]&&
                                                words[m][3] == matrix[0][0])||(words[m][0] == matrix[3][1]&&
                                                words[m][1] == matrix[2][1]&&
                                                words[m][2] == matrix[1][1]&&
                                                words[m][3] == matrix[0][1])||(words[m][0] == matrix[3][2]&&
                                                words[m][1] == matrix[2][2]&&
                                                words[m][2] == matrix[1][2]&&
                                                words[m][3] == matrix[0][2])||(words[m][0] == matrix[3][3]&&
                                                words[m][1] == matrix[2][3]&&
                                                words[m][2] == matrix[1][3]&&
                                                words[m][3] == matrix[0][3]))
                                                    count++;
                                            else if((words[m][0] == matrix[0][0]&&
                                                     words[m][1] == matrix[0][1]&&
                                                     words[m][2] == matrix[0][2]&&
                                                     words[m][3] == matrix[0][3])|| (words[m][0] == matrix[1][0]&&
                                                     words[m][1] == matrix[1][1]&&
                                                     words[m][2] == matrix[1][2]&&
                                                     words[m][3] == matrix[1][3])||(words[m][0] == matrix[2][0]&&
                                                     words[m][1] == matrix[2][1]&&
                                                     words[m][2] == matrix[2][2]&&
                                                     words[m][3] == matrix[2][3])||(words[m][0] == matrix[3][0]&&
                                                     words[m][1] == matrix[3][1]&&
                                                     words[m][2] == matrix[3][2]&&
                                                     words[m][3] == matrix[3][3]))
                                                        count++;
                                            else if((words[m][0] == matrix[0][3]&&
                                                     words[m][1] == matrix[0][2]&&
                                                     words[m][2] == matrix[0][1]&&
                                                     words[m][3] == matrix[0][0])||(words[m][0] == matrix[1][3]&&
                                                     words[m][1] == matrix[1][2]&&
                                                     words[m][2] == matrix[1][1]&&
                                                     words[m][3] == matrix[1][0])||(words[m][0] == matrix[2][3]&&
                                                     words[m][1] == matrix[2][2]&&
                                                     words[m][2] == matrix[2][1]&&
                                                     words[m][3] == matrix[2][0])||(words[m][0] == matrix[3][3]&&
                                                     words[m][1] == matrix[3][2]&&
                                                     words[m][2] == matrix[3][1]&&
                                                     words[m][3] == matrix[3][0]))
                                                        count++;
                                                     if(count == numb_words - 4)
                                                     {

                                                         for(n = 0;n < 4; n++)
                                                         {
                                                             valid[t][n][0] = matrix[n][0];
                                                             valid[t][n][1] = matrix[n][1];
                                                             valid[t][n][2] = matrix[n][2];
                                                             valid[t][n][3] = matrix[n][3];
                                                         }

                                                         t++;
                                                         for(n = 0; n < 4; n++)
                                                         {
                                                             valid[t][0][n] = matrix[n][3];
                                                             valid[t][1][n] = matrix[n][2];
                                                             valid[t][2][n] = matrix[n][1];
                                                             valid[t][3][n] = matrix[n][0];
                                                         }
                                                         t++;
                                                         for(n = 0; n < 4; n++)
                                                         {
                                                             valid[t][n][0] = matrix[3][n];
                                                             valid[t][n][1] = matrix[2][n];
                                                             valid[t][n][2] = matrix[1][n];
                                                             valid[t][n][3] = matrix[0][n];
                                                         }
                                                         t++;
                                                         q += 3;
                                                     }
                                        }
                                        count = 0;
                                    }

                                }
                            }
                        }


                    }
                }
            }
        }
        equ(valid,answer,t);


        if(q == 0)
        {
            printf("grid\nsnot\nposs\nible");
        }
        else
                print_array(answer,4);
        q = 0;

        attempt--;
    }



    return 0;
}
int inp(void)
{

    char c;
    int n = 0;
    while((c = getchar())!= '\n')
    {
        if(isdigit(c))
            n = n * 10 + c - '0' ;
        if(isspace(c))
            return n;


    }
    return n;
}
void equ(char a[][4][4],char b[4][4],int c)
{
    int i = 0, j = 0,k = 0,l = 0,m = 0,I,J;
    for(I = 0; I < 4; I++)
    {
        for(J = 0; J < 4; J++)
        {
            b[J][I] = a[0][J][I];
        }
    }

    for(i = 1;i < c ; i++)
    {
        for(j = 0; j < 4 &&(a[i][j][k] == b[j][k]); j++)
        {
            for(k = 0; k <4 && (a[i][j][k] == b[j][k]); k++)
            {
                ;
            }
        }


    if(a[i][j][k] < b[j][k] )
    {
        for(I = 0; I < 4; I++)
    {
        for(J = 0; J < 4; J++)
        {
            b[I][J] = a[i][I][J];
        }
    }
    }
    else
        continue;

    }

}


void print_array(char arr[][4], int i)
{
    int a, b;
    for(a = 0;a < i;a++)
    {
        for(b = 0; b < 4;b++)
        {
            printf("%c",arr[a][b]);
        }
        printf("\n");
    }

}
