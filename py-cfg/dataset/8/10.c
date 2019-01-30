	 #include<stdio.h>
	 #include<stdlib.h>
	int swap(int *, int*);
	int arraysum(int*,int);
	void sort(int*,int,int);
	
	int main()
	{
	 int T,N,K,i,k=0,l=0,var;
	 long oddsum,evensum;
	// printf("Enter T \n");
	  scanf("%d",&T);
	  
	 /* if((T<1)||(T>100))
	  exit(-1);*/
	 int j=T, g[T];
	 while(T)
	  {
	  	//printf("Enter N and K \n");
	  	scanf("%d %d",&N,&K);
	  	//printf("Enter %d elements",N);
	  //	if((N>=1)&&(N<=10000)&&(K>=0)&&(K<=10000))
	  	
	  		var=((N%2==0)?(N/2):(N/2+1));
	  		int A[N],ehalf[N/2],ohalf[var];
		for(i=0;i<N;i++)
	  	{
	  		scanf("%d",&A[i]);
	  	/*	if(A[i]<0||A[i]>10000)
	  		exit(-1);*/
		  }
		  i=0,k=0;
		  while((i%2==0)&&(i<N))
		  {
		  	ohalf[k++]=A[i];
		  	i+=2;
		  }
		  i=1,l=0;
		  while((i%2==1)&&(i<N))
		  {
		  	ehalf[l++]=A[i];
		  	i+=2;
		  }
		 /* for(i=0;i<N/2;i++)
		  {
		  	printf("%d \n",ehalf[i]);
		  }
		  for(i=0;((N%2==0)?(i<N/2):(i<=N/2));i++)
		  {
		  	printf("%d \n",ohalf[i]);
		  }*/
	
		    sort(ehalf,0,N/2);
			sort(ohalf,0,var);
			//k=0;l=0;
			for(i=0;i<K;i++)
			{
				if(ehalf[i]<ohalf[var-i-1])
				{
					swap(&ehalf[i],&ohalf[var-i-1]);
				}
				else
				break;
			}
		/*	for(i=0;i<var;i++)
			printf("%d \n",ohalf[i]);
			for(i=0;i<N/2;i++)
			printf("%d \n",ehalf[i]);*/
			oddsum =arraysum(ohalf,var);
			evensum =arraysum(ehalf,N/2);
				g[j-T]= ((evensum-oddsum)>0)?1:0;
			
					
		/*	for(i=0;i<N/2;i++)
			{
				printf("%d \n",ehalf[i]);
				}	
				for(i=0;i<var;i++)
				{
					printf("%d \n",ohalf[i]);
				}
	  */
	  	T--;
	  
	  /*else
	  exit(-1);*/
	  }
	  for(k=0;k<j;k++)
	  { 
	  	if(g[k]==1)
	  	printf("YES \n");
	  	else
	  	printf("NO \n");
	  }
	}
	int arraysum(int a[],int n)
	{
		int i,sum=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		return sum;
	}
	int swap(int *a, int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}
	void merge(int arr[], int l, int m, int r) 
    { 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void sort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        sort(arr, l, m); 
        sort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 