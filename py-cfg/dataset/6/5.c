#include<stdio.h>
int main(){
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++){
int A;int B;int K;int j;int c;int d;int n;int l;int m=0;
scanf("%d%d%d",&A,&B,&K);
for(j=A;j<=B;j++){
c=0;d=0;
for(n=1;n<j;n++){
if(j%n==0){
for(l=1;l<n;l++){
if(n%l==0){
c=c+1;}}
if(c==1){
d=d+1;}}}
if(d==K){
m=m+1;}}
printf("%d",m);}
return 0;}



