#include<stdio.h>
char S[1000006];
int A[1000006];
int main()
{
       long long t;
       scanf(" %lld",&t);
       while(t--)
       {
           scanf(" %s",S+1);
           long long totals=0,totalm=0,eatens=0,rems=0;
           for(long long i=1;S[i];i++)
           {
               if(S[i]=='s')
               {
                   totals++;

                   if(i==1)
                   {
                       if(S[2]=='m' && A[2]==0)
                       {
                           A[2]=1;
                           A[1]=1;
                           eatens++;
                       }

                   }

                   else
                   {
                       if(S[i-1]=='m' || S[i+1]=='m')
                       {
                           if(S[i-1]=='m' && A[i-1]==0)
                           {
                               A[i-1]=1;
                               A[i]=1;
                               eatens++;
                           }
                           else if(S[i+1]=='m' && A[i+1]==0)
                           {
                               A[i+1]=1;
                               A[i]=1;
                               eatens++;
                           }
                       }
                   }
               }
               else
                totalm++;
           }
           rems=totals-eatens;
           if(totalm>rems)
            printf("mongooses\n");
           else if(rems==totalm)
           {
               printf("tie\n");
           }
           else
            printf("snakes\n");

           for(int i=1;S[i];i++)
            A[i]=0;
       }
}
