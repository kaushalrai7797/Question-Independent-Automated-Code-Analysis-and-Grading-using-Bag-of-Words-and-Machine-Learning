
Issub(char m[],char w[])
{
    int i,pos=0,count=0,j=0;
    for(i=0;i<strlen(m);i++)
    {
        if(m[i]==w[j])
        {
            j++;
            if(j==strlen(m)-1)
            return 1;
            
        }
    }

    return 0;
}

int main()
{
    int t,r1,n1,n2;
    char m[100000],w[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",m,w);
        n1=strlen(m);n2=strlen(w);
        if(n1<=n2)
        r1=Issub(m,w);
        else r1=Issub(w,m);
        if(r1)
        printf("YES\n");
        else printf("NO\n");
    }
}