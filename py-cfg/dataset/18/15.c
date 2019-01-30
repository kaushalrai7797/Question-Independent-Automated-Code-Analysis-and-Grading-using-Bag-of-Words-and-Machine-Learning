#include<stdio.h>
#include<string.h>
int main(void) {
    int t,c[27],d[27],i,len1,len2,flag,j;
    scanf("%d",&t);
    char a[1005],b[1005];
    while(t--){
        flag=0;
        scanf("%s",a);
        scanf("%s",b);
        for(i=0;i<26;i++){
        c[i]=0;
        d[i]=0;
        }
        len1=strlen(a);
        len2=strlen(b);

        for(i=0;i<len1;i++)
        c[a[i]-97]++;
        for(j=0;j<len2;j++)
        d[b[j]-97]++;
        for(i=0;i<26;i++){
            if(c[i]!=d[i])
            flag++;
        }
      /*  for(i=0;i<26;i++)printf("%d",c[i]);
        printf("\n");*/
        if(flag>0)
        {
            for(i=0;i<len2;i++)
            {
                if(c[b[i]-97]!=0||c[b[i]-97]!=d[a[i]-97])
                {flag=-1;break;}
            }
        }
        else
        {printf("YES\n");continue;}
        if(flag==-1)
        printf("NO\n");
        else
        printf("YES\n");
    
        
        
        
    }
	// your code goes here
	return 0;
}

