#include<stdio.h>
void Permute(int[], int, int, int);
int Calculate(int[],int);
int M,max=0;
main()
{
	int output[10],a[30],N,T,i,j;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d%d",&N,&M);
		for(j=0;j<N;j++)a[j]=j+1;
	    Permute(a,0,N-1,N);
            output[i]=(max!=-1)?M-max:-1;

	    max=0;
    }
    for(i=1;i<=T;i++)
       printf("%d\n",output[i]);


	return 0;
}
void Permute(int s[],int start, int end, int len)
{
	int i,j,N,tmp,val;
	N=end-start+1;
	if(start==end)
	{
	  val=Calculate(s,len);
	  if(val > max && val <= M )max=val;
	  if(max==0)max=-1;
	  return;
	}
	int Temp[len];
	for(i=0;i<N;i++)
	{
		for(j=0;j<len;j++)Temp[j]=s[j];
		tmp=Temp[start];
		Temp[start]=Temp[start+i];
		Temp[start+i]=tmp;
		Permute(Temp,start+1,end,len);
	}
}
int Calculate(int P[],int len)
{
	int Occ[len+1];
	int i,j,tmp,pos_left=0,pos_right=len+1,used=0;
        for(i=1;i<=len;i++)Occ[i]=0;
	for(i=0;i<len;i++)
	{
		tmp=P[i];
		Occ[tmp]=1;
		pos_left=0;pos_right=len+1;
		for(j=(tmp-1);j>=1;j--)
		   if(Occ[j]==1){pos_left=j;break;}
		for(j=(tmp+1);j<=len;j++)
		   if(Occ[j]==1){pos_right=j;break;}
		used=used+(tmp-pos_left)+(pos_right-tmp);
	}

	return used;
}
