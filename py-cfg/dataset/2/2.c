#include<stdio.h>
int main()
{
 char s[1000000];
 int t,i,j,c;
 scanf("%d",&t);
 while(t--)
 {
  c=0;
  scanf("%s",s);
  for(i=0;s[i]!=0;i++)
   if(s[i]=='<')
    for(j=i+1;s[j]!=0;j++)
     if(s[j]=='>')
      {
       c=c+2;
       break;
      }
     printf("%d\n",c); 
 }
}