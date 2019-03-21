#include<stdio.h>
int A[1000],n,m;
int main(){
int t,i,j,x;
scanf("%d",&t);
while(t--){

    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        A[i]=-1;

    A[0]=A[n+1]=1;
    x=nokia(1,0);
    if(x==-1)
        printf("-1\n");
    else
    printf("%d\n",m-x);
}

return 0;
}

int nokia(int i,int sum){
 int res,k,j;
if(i==n+1 && sum<=m)
    return sum;
else if(i==n+1)
return -1;


for(j=1;j<=n;j++){

    if(A[j]==-1){
        A[j]=i;
        sum+=Dist(j);
        res=nokia(i+1,sum);
        if(res!=-1)
            return res;
        sum-=Dist(j);
    }

    for(k=1;k<=n;k++){
        if(A[k]>=i)
          A[k]=-1;

    }
}

return -1;

}

int Dist(int j){

int left,right,i;
left=right=0;
for(i=j-1;i>=0;i--){
    if(A[i]!=-1){
       left=j-i;
       break;
    }

}
for(i=j+1;i<=n+1;i++)
{
    if(A[i]!=-1){
        right=i-j;
        break;
    }
}

return left+right;
}
