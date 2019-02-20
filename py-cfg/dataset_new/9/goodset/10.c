#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    while(t--){

        int sp,ss,fs,d,t;
        scanf("%d %d %d %d %d",&sp,&ss,&fs,&d,&t);
        float rs=(180.0*d)/t;
        rs+=sp;
        float sebi=ss-rs;
        float fath=fs-rs;
        if(sebi<0) sebi=-sebi;
        if(fath<0) fath=-fath;
        if(sebi<fath)
            printf("SEBI\n");
        else if(sebi>fath)
            printf("FATHER\n");
            else
                printf("DRAW\n");
    }

    return 0;


}
