#include<stdio.h>
 
int main()
{
  int tot_pages, n_mis_pages, sum_mis_pages, tor_leaves, test_cases, temp;
 
  scanf("%d", &test_cases);
  while(test_cases--){
    sum_mis_pages = 0;
 
    scanf("%d %d", &tot_pages, &n_mis_pages);
    while(n_mis_pages--){
      scanf("%d", &temp);
      sum_mis_pages += temp;
    }
    scanf("%d", &tor_leaves);
 
    if(tot_pages%2==0)
      printf("%.4f\n", 
      (((float)tot_pages)*(tot_pages+1)/2 - sum_mis_pages)
      *(tot_pages - 2*(float)tor_leaves)/tot_pages);
    else{
      temp = (tot_pages+1)/2;
      printf("%.4f\n", 
      (((float)tot_pages)*(tot_pages+1)/2 - sum_mis_pages)
      *(temp - (float)tor_leaves)/temp);
    }
  }
 
  return 0;
} 