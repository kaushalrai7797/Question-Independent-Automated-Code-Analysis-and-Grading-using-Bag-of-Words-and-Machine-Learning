    #include <stdio.h>
    
    int main()
    {
int T;
scanf ("%d",&T);
while (T--)
{
        int N,A,K,D,X,Y=1;
        scanf ("%d %d %d",&N,&A,&K);
        D=((720/N)-2*(180-A))/(N-1);
        X=A + (1-K)*D;
        printf ("%d %d\n",X,Y);

}
return 0;
    }



