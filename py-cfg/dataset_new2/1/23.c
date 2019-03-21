#include<stdio.h>
int main(void){
  char B[100],C[10000];
  int T,i,flag,len;
  scanf("%d",&T);
  while(T--){
    scanf(" %[^\t\n]s",&C);
    len=strlen(C);
    flag=0;
   char ch='a';
   for(i=0;i<26;i++)
    B[i]=ch++;
   ch='A';
   for(i=26;i<52;i++)
     B[i]=ch++;
   for(i=0;i<len;i++){
    if(C[i]=='a' || C[i]=='A'){
     B[0]=B[26]='1';
     }
    else  if(C[i]=='b' || C[i]=='B'){
     B[1]=B[27]='1';
     }
    else  if(C[i]=='c' || C[i]=='C'){
     B[2]=B[28]='1';
     }
    else  if(C[i]=='d' || C[i]=='D'){
     B[3]=B[29]='1';
     }
    else  if(C[i]=='e' || C[i]=='E'){
     B[4]=B[30]='1';
     }
    else  if(C[i]=='f' || C[i]=='F'){
     B[5]=B[31]='1';
     }
    else  if(C[i]=='g' || C[i]=='G'){
     B[6]=B[32]='1';
     }
    else  if(C[i]=='h' || C[i]=='H'){
     B[7]=B[33]='1';
     }
    else  if(C[i]=='i' || C[i]=='I'){
     B[8]=B[34]='1';
     }
    else  if(C[i]=='j' || C[i]=='J'){
     B[9]=B[35]='1';
     }
    else  if(C[i]=='k' || C[i]=='K'){
     B[10]=B[36]='1';
     }
    else  if(C[i]=='l' || C[i]=='L'){
     B[11]=B[37]='1';
     }
    else  if(C[i]=='m' || C[i]=='M'){
     B[12]=B[38]='1';
     }
    else  if(C[i]=='n' || C[i]=='N'){
     B[13]=B[39]='1';
     }
    else  if(C[i]=='o' || C[i]=='O'){
     B[14]=B[40]='1';
     }
    else  if(C[i]=='p' || C[i]=='P'){
     B[15]=B[41]='1';
     }
    else  if(C[i]=='q' || C[i]=='Q'){
     B[16]=B[42]='1';
     }
    else  if(C[i]=='r' || C[i]=='R'){
     B[17]=B[43]='1';
     }
    else  if(C[i]=='s' || C[i]=='S'){
     B[18]=B[44]='1';
     }
    else  if(C[i]=='t' || C[i]=='T'){
     B[19]=B[45]='1';
     }
    else  if(C[i]=='u' || C[i]=='U'){
     B[20]=B[46]='1';
     }
    else  if(C[i]=='v' || C[i]=='V'){
     B[21]=B[47]='1';
     }
    else  if(C[i]=='w' || C[i]=='W'){
     B[22]=B[48]='1';
     }
    else  if(C[i]=='x' || C[i]=='X'){
     B[23]=B[49]='1';
     }
    else  if(C[i]=='y' || C[i]=='Y'){
     B[24]=B[50]='1';
     }
    else  if(C[i]=='z' || C[i]=='Z'){
     B[25]=B[51]='1';
     }
    }
    for(i=0;i<52;i++)
    if(B[i]!='1'){
      printf("%c\n",B[i]);
      flag=1;
      break;
      }
      if(flag==0)
        printf("~\n");
   }

 return 0;
 }
