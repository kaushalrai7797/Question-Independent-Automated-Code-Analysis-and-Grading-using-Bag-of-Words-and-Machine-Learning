#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        register int number1=0,number2=0,possible=1;
        for(register int i=0;i<n;i++)
        {
            int input;
            scanf("%d",&input);
            if(possible && input)
            {
                if(!number1)
                  number1 = input;
                else if(number1 != input && !number2)
                  number2 = input;
                else
                {
                    if(number1 != input && number2!=input)
                          possible--;
                }
            }
        }
        printf("%s\n",possible?"YES":"NO");
    }
	return 0;
}
