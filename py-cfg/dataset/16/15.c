#include<stdio.h>
int n;
int merge(int a[],int low,int mid,int high){
	int i=low,j=mid+1,c[n],k=low;
	while((i<=mid) && (j<=high)){
		if(a[i]<=a[j]){
			c[k]=a[i];
			i=i+1;
			k=k+1;
		}

		else{
			c[k]=a[j];
			k=k+1;
			j=j+1;
		}
	}

	while(i<=mid){
		c[k]=a[i];
		i=i+1;
		k=k+1;
	}

	while(j<=high){
		c[k]=a[j];
		j=j+1;
		k=k+1;
	}

	for(i=low;i<=high;i++){
		a[i]=c[i];
	}
	return 0;
}


int mergeSort(int a[],int low,int high){
	int mid=0;
	if(low<high){
		mid=(low+high)/2;

		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);

		merge(a,low,mid,high);
	}
	return 0;
}








int main()
{
    int test,i,k,n;     scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    scanf("%d",&test);
     	mergeSort(a,0,n-1);
    while(test>0)
    {
        test--;
        k=0;
        scanf("%d",&k);    
        int sum=0;
        for(i=0;i<(n-k);i++)
        {
            sum=sum+a[i];
            
        }
        printf("%d",sum);
    }
return 0;
}