#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[28],b[28];
int main()
{
    int t,i,j,lr,ls,f;
    char r[1002],s[1002];
    scanf("%d",&t);
    while(t--){for(i=0;i<26;i++)
                     { a[i]=0; b[i]=0;}
               f=0;   j=0;
               scanf("%s%s",r,s);
               lr=strlen(r);     ls=strlen(s);
               for(i=0;i<lr;i++)
               a[r[i]-'a']++;
               for(i=0;i<ls;i++)
               b[s[i]-'a']++;
               for(i=0;i<26;i++)
               {
                  if((a[i]!=0 && b[i]==0)||(a[i]==0 && b[i]!=0 ))
                       {       printf("YES\n");     j=1;  break;     }
                  if(a[i]!=b[i])                    f=1;
                  }
               if(j==0)
                       {if(f==1)       printf("NO\n");
                        else           printf("YES\n");
                       }
               }
    return 0;
}
 