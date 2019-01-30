#include <stdio.h>
#include <string.h>

int check_subsequence (char [], char[]);

int main ()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
   int flag;
   char s1[1000], s2[1000];
   scanf("%s",s1);
   scanf("%s",s2);
   if (strlen(s1) < strlen(s2))
      flag = check_subsequence(s1, s2);
   else
      flag = check_subsequence(s2, s1);

   (flag)?printf("YES\n"):printf("NO\n");
 }

   return 0;
}

int check_subsequence (char a[], char b[]) {
   int c, d;

   c = d = 0;

   while (a[c] != '\0') {
      while ((a[c] != b[d]) && b[d] != '\0') {
         d++;
      }
      if (b[d] == '\0')
         break;
      d++;
      c++;
   }
   if (a[c] == '\0')
      return 1;
   else
      return 0;
}
