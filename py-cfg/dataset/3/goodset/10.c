#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
for(int z=0;z<t;z++){
int n,i,j,x,count=0;
scanf("%d",&n);
char arr[2][n+1];
scanf("%s",arr[0]);
scanf("%s",arr[1]);
for(i=0;i<2;i++)
for(j=0;j<n;j++){
if(arr[i][j]=='#')
count++;
}
for(i=0;i<n;i++){
x=0;
if(arr[x][i]=='#')
break;
x=1;
if(arr[x][i]=='#')
break;}
int p1=x,d1=1-x,c=0;
int p2=1-x,d2=x;
int l=i;

for(i;i<n;i++){
if(arr[p1][i]=='#')
c++;
else
break;
if(arr[p2][i]=='#'){
c++;
p1=1-p1;
p2=1-p2;}}

if(arr[d1][l]=='#'&&arr[d2][l]=='#'&&c!=count){
c=0;
for(l;l<n;l++){
if(arr[d1][l]=='#')
c++;
else
break;
if(arr[d2][l]=='#'){
c++;
d1=1-d1;
d2=1-d2;
}}}

if(c==count&&c!=0)
printf("yes\n");
else
printf("no\n");
}
return 0;
}


























