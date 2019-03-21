#include<stdio.h>
int main()
{
  int total;
  scanf("%d",&total);
  while(total)
  {
    int number;
    long int min=10000000;
    scanf("%d",&number);
    long int Array[number];
    long int diff;
    for(int i=0;i<number;i++)
    {
      scanf("%ld",&Array[i]);
      for(int j=0;j<i;j++)
        if(i!=j)
        {
          diff=Array[i]-Array[j];
          if(diff<0)
            diff*=-1;
          if(diff<min)
          {min=diff;}
          //printf("%d %ld %d\n",i,diff,j);}
        }
    }
    printf("%ld\n",min);
    total--;
  }
  return 0;
}
