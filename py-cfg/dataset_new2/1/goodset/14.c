#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    char b[320];
    //cin>>t;
    gets(b);
    while(t--)
    {
        int a[26];
        for(int i=0;i<26;i++)
        a[i]=0;
        //fflush(stdin);
        gets(b);
       // cout<<b<<endl;
        int set=0;
        int i;
        for(i=0;i<strlen(b);i++)
        {
            int c=b[i]-'a';
           // cout<<"c is "<<c<<" ";
           // cout<<endl;
            int d=b[i]-'A';
           // cout<<"d is "<<d<<" ";
            if((c>=0)&&(c<=25))
            a[c]++;
            else if((d>=0)&&(d<=25))
            a[d]++;

        }
        for(int i=0;i<26;i++)
        {  char p='a'+i;
            if(a[i]==0)
            {   printf("%c\n",p);
              //  cout<<p<<endl;
                set=1;
                break;
            }
        }
        if(set==0)
        printf("~\n");
        //cout<<"~"<<endl;

    }
}
