#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n,k,i,j,p=0;
	int flag[t];
	for(i=0;i<t;i++)flag[i]=0;


    for(j=0;j<t;j++)
	{
    p=0;

    scanf("%d %d",&n,&k);
    int a[n];
    int rem[k+1];

    for(i=0;i<k+1;i++)
    rem[i]=0;

	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	rem[a[i]%(k+1)]++;
	}

	for(i=0;i<k+1;i++)
	if(rem[i]==0)p++;

	if(p==n-1)flag[j]=1;

	else if(p<n-2)flag[j]=0;


	else if(p==n-2){
         for(i=0;i<k+1;i++)
         if(rem[i]==1){flag[j]=1;break;}

}


	}
for(i=0;i<t;i++)
	if(flag[i]==1)printf("YES\n");
    else printf("NO\n");

return 0;
}
