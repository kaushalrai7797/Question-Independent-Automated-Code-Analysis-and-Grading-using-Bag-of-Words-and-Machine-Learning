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
  int q=3;
  int r=4;
  int ans;
  ans =q*r;



//  do{
//       c++;
//       d--;
//   } while (d > 5) ;


  switch (d) {
          case 5: c++; break;
          case 10: d++; break;
          case 20: sum++; break;
          default: n2++; break;
  }
//
//    if (d==5) {
//        c++;
//    }
//    else if(q<10) {
//        d++;
//    }
//    else if(r>20) {
//        sum++;
//    }
//
//    else {
//        n2++;
//    }



//  for (int i  = 0 ; i < 10; i++){
//    n1 = n1 + c;
//    arr[i] = n1;
//    c = 12;
//
//    if(n1 > 100){
//      c = 0;
//    }
//  }
//
//  int q=3;
//  int r=4;
//  int ans;
//  ans =q*r;
//
//  while(ans>8){
//    q++;
//    r++;
//    ans--;
//  }

  n1++;
  n2--;
  sum=sum+6;


  return 0;
}

int addNumbers(int a,int b)
{
    int result;
    result = a+b;
    return result;
}
