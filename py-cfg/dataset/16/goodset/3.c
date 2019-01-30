#include<stdio.h>
#include<stdlib.h>
int main()
{   long int n;
long int sum=0,q;
       scanf("%ld",&n);
       long int a[n],b[n];
         int cmpfunc (const void * a, const void * b) 
{
   return ( *( int*)a - *(int*)b ); 
}

       for( long int i=0;i<n;i++)
        scanf("%ld",&a[i]);
         
       qsort((void*)a,n,sizeof(long int),cmpfunc);
   for(int r=0;r<n;r++)
      {sum+=a[r];
         b[r]=sum;}
         //for ( int i=0; i < n; i++) 
        //printf("%ld ", b[i]); 
    //printf("\n"); 
       long int f,e,o;
       scanf("%ld",&q);
       for(long int j=0;j<q;j++)
     {  scanf("%ld",&f);
     e=n/(f+1);
     o=n%(f+1);
     if(o==0)
      printf("%ld\n", b[e-1]); 
     else
      printf("%ld\n", b[e]);  }
      
   return 0;    
}