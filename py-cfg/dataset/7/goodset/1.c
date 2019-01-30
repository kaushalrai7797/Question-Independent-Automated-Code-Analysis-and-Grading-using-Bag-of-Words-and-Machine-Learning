     #include <stdio.h> 
        #include<string.h> 
        int main(void) { 
         int testcases,len,i,sum; 
         char s[100001];
         scanf("%d",&testcases);
         while(testcases--)
         { sum=0;
           scanf("%s",s);
           len=strlen(s);
           for(i=0;i<len;i++)
            sum=sum+s[i]-48;
           if(sum<5)
           { 
           if(len==1) printf("%d\n",sum);
           else printf("%d\n",9-sum);
           }
           else
           { sum=sum%9; 
             if(sum<5) printf("%d\n",sum);
             else printf("%d\n",9-sum); 
           }
          }
          return 0;
        }   
