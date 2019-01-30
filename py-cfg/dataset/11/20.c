#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    if (m == 0) return true;
    if (n == 0) return false;
    if (str1[m-1] == str2[n-1])
        return isSubSequence(str1, str2, m-1, n-1);
    return isSubSequence(str1, str2, m, n-1);
}
int main()
{
    int t;
    scanf("%d",&t );
    while(t--)
    {
    char str1[25000],str2[25000];
    scanf("%s %s",str1,str2);
    int m = strlen(str1);
    int n = strlen(str2);
    isSubSequence(str1, str2, m, n)? printf("YES\n"):printf("NO\n");
    }
    return 0;
}
