#include<stdio.h>
#include<math.h>
long long int check(long long int);
 
main()
{
    long long int start,end,k,store[130];
    long long int count=0,test,i,j=0;
    scanf("%lld",&test);
        for(i=1;i<=100000;i++)
        {
            if((i%10==4 || i%10==5 || i%10==6))
            continue;
            k=i*i;
            if(check(k)==1)
            store[j++]=k;
 
        }
      while(test--)
      {
      scanf("%lld %lld",&start,&end);
      count=0;
      for(i=0;i<j;i++)
      {
          if(store[i]>=start && store[i]<=end)
          count++;
      }
        printf("%lld\n",count);
      }
}
 
long long int check(long long int k)
{
    while(k)
    {
        if(k%10!=0 && k%10!=1 && k%10!=4 && k%10!=9)
        return 0;
 
        k=k/10;
    }
    return 1;
    }