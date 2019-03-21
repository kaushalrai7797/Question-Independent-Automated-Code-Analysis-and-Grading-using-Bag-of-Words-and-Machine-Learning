#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,input;
        scanf("%d%d%d",&n,&k,&input);
        k++;
        register int number1=input%k,number2=1001;
        register int count1=1,count2=0;
        for(register int i=1;i<n;i++)
        {
            scanf("%d",&input);
            input%=k;
            if(number1!=input)
            {
                if(number2 == 1001)
                  {number2 = input;
                   count2++;
                  }
                else
                {
                    if(number2==input)
                     count2++;
                }
            }
            else
              count1++;
        }
        printf("%s\n",(count1>=n-1) || (count2==n-1)?"YES":"NO");
    }
	return 0;
}
