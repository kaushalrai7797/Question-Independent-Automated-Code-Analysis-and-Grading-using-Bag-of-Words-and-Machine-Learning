#include<stdio.h>
#include<string.h>
int main(){
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++){
    char r[1000],s[1000];
    scanf("%s\t%s",r,s);
    int arr1[26],arr2[26],j,lenr,lens,flag;
    for(j=0;j<26;j++){
        arr1[j]=0;
        arr2[j]=0;
    }
    char k;
    lenr=strlen(r);
    lens=strlen(s);
    for(k='a';k<='z';k++){
        for(j=0;j<lenr;j++){
            if(r[j]==k)
                arr1[(int)(k-97)]++;
        }
    }
     for(k='a';k<='z';k++){
        for(j=0;j<lens;j++){
            if(s[j]==k)
                arr2[(int)(k-97)]++;
        }
    }
flag=0;
for(j=0;j<26;j++){
 if(arr1[j]!=arr2[j] && arr1[j]!=0 && arr2[j]!=0)
    flag=1;
}

if(flag==0)
    printf("YES\n");
else
    printf("NO\n");
}
return 0;
}
