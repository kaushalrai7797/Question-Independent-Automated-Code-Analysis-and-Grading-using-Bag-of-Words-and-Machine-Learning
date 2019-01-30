#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int l1,l2,i,j=0,f=0;
char s1[25000],s2[25000],s3[25000];
scanf("%s",s1);
scanf("%s",s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1<l2)
{
int s=l1;
    l1=l2;
    l2=s;
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);
}
for(i=0;i<l1;i++)
{
  if(s1[i]==s2[j])
  {
     j++;
     if(j==l2-1)
     {
       f=1;
      break;
     }
  }
}
if(f==1)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}