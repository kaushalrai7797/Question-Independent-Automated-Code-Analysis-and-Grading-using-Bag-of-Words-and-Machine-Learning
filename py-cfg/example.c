#include <stdio.h>
#include<bits/stdc++.h>

int addNumbers(int a, int b);

int main()
{
  int n1 = 0;
  int c = 0;
  int d = 10;
  int n2 = 1;
  int sum;
  sum = c + d;
  int arr[50];
  arr[d] = 20;
  for (int i  = 0 ; i < 10; i++){
    n1 = n1 + c;
    arr[i] = n1;
    c = 12;

    if(n1 > 100){
      c = 0;
    }
  }



  
  return 0;
}

int addNumbers(int a,int b)
{
    int result;
    result = a+b;
    return result;
}
