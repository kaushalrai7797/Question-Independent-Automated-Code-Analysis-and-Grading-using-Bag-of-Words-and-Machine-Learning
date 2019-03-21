#include<stdio.h>
#include<string.h>
int main()
{

  int t,i,f,v;
  char s[326];
  scanf("%d\n",&t);
  while(t--)
  {
    f=0;
    int a[127]={0};
    gets(s);
   // puts(s);
    for(i=0;i<strlen(s);i++)
    {
      v=s[i];
      a[v]=2;
    // printf("%d ",v);
    }

    for(i=65;i<91;i++)
    {
      if(a[i]==0&&a[i+32]==0){printf("%c\n",i);f=23;break;}
    }
    if(f!=23)printf("~\n");

  }
  return 0;
}
