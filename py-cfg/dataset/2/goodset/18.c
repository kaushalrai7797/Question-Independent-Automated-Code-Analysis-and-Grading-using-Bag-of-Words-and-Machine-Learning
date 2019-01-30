#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        char a[5000001];
        scanf("%s",&a);
        long long int len=strlen(a);
        long long int check;
        long long int count=0;
        long long int s=0,e=0;
        
        for(int i=0;i<len;i++)
        {
            e++;
            if(a[i]=='<')
            {
                s++;
            }
            else if(a[i]=='>')
            {
                s--;
            }
            
            if(s<0)break;
            
            if(s==0)
            {
                count=e;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
