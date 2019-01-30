#include<stdio.h>
#include<string.h>
main()
{
	int t,i,a1[26],a2[26],k;  char r[1001],s[1001],c;
	scanf("%d",&t);
	while(t--){
		k=0;
		scanf("%s%c%s",r,&c,s);
		
		for(i=0;i<26;i++)
		{ a1[i]=0; a2[i]=0;	}
		
		for(i=0;i<strlen(r);i++){
			a1[r[i]-97]++;
		}
		for(i=0;i<strlen(s);i++){
			a2[s[i]-97]++;
		}
		for(i=0;i<26;i++)
		 if(a1[i]==a2[i])
		  k++;
		if(k==26)
		 printf("YES\n");
		else printf("NO\n");   
	}
}