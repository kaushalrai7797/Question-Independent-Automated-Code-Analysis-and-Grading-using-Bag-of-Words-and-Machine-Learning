#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int t,i,v;
 char a[315];
 int in[123];
 scanf("%d",&t);
 while(t--)
 { v=0;
  for(i=0;i<123;i++)
  {in[i]=0;}
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    in[a[i]]++;
  }
  /*for(i=65;i<123;i++){printf("%d ",in[i]);} */
  for(i=65;i<=90;i++)
  {if(in[i]==0&&in[i+32]==0)
   {v=1;break;}
  }
  if(v==1){printf("\n%c",(char)i);}
  else{printf("\n~");}
 }
return 0;
}
