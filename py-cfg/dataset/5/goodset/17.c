    #include<stdio.h>
    long long arr[150];
     
    int count=0;
    void compute()
    {   long long i,temp,square,rem;
        for(i=1;i<=100000;i++)
        {
        square=i*i;
        temp=square;
        while(square)
        {
            rem=square%10;
            if(!(rem==0 ||rem==1||rem==4||rem==9))
            break;
            square=square/10;
        }
        if(!square)
        arr[count++]=temp;
        }
    }
     
    int main()
    {
    compute();
    int i,t,ans;
    long long a,b;
    scanf("%d",&t);
    while(t--)
    {
    ans=0;
    scanf("%lld",&a);
    scanf("%lld",&b);
    for(i=0;i<count;i++)
    {
    if(arr[i]>=a && arr[i]<=b)
    ans++;
    }
    printf("%d",ans);
    if(t)
    printf("\n");
    }
    return 0;
    }