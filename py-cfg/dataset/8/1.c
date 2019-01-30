#include <stdio.h>
 
 
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
 
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1); 
 
	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
 
 
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
 
int main(void)
{
	int t,Motu[5000],Tomu[5000],k,n,i,j;
	int l;
	long int M_sum,T_sum,dif,addM,addT;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	      M_sum=0;
	      T_sum=0;
	      scanf("%d %d",&n,&k);
	      
	          for(j=0;j<n/2;j++)
                 {
	                 scanf("%d",&Motu[j]);
	                 M_sum+=Motu[j];
	                 scanf("%d",&Tomu[j]);
	                 T_sum+=Tomu[j];
	                 
	           }
	           if(n%2!=0)
	           {
	            scanf("%d",&Motu[n/2]);
	            M_sum+=Motu[n/2];
	           }
	           if(T_sum>M_sum)
	           {
	                 printf("YES\n");
	           }
	           else
	           {
	                 addM=0;
	                 addT=0;
	                 if(n%2!=0)
	                  quickSort(Motu,0,n/2);
	                  else
	                  quickSort(Motu,0,(n/2)-1);
	                  dif=M_sum-T_sum;
	                  quickSort(Tomu,0,(n/2)-1);
	                  if(k>n/2)
	                  {
	                        k=n/2;
	                  }
	                  if(n%2!=0)
	                  {
	                     for(l=0;l<k;l++)
	                     {
	                       if(Tomu[l]<Motu[n/2-l])  
	                       {
	                       addT+=Tomu[l];
	                       addM+=Motu[n/2-l];
	                       }
	                       else
	                       break;
	                        
	                     }
	                  }
	                  else
	                  {
	                        for(l=0;l<k;l++)
	                        {
	                         if(Tomu[l]<Motu[n/2-1-l])  
	                         {
	                         addT+=Tomu[l];
	                         addM+=Motu[n/2-l-1];
	                         }
	                         else
	                         break;
	                        
	                        }
	                  }
	                  if(dif< (2*addM - 2*addT))
	                  {
	                        printf("YES\n");
	                  }
	                  else
	                  {
	                         printf("NO\n");
	                  }
	                 
	                 
	           }
	     
	     
	      
	}
	return 0;
}