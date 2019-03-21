#include <stdio.h>
#include <string.h>

int main(void) {
    //char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n;
    char space, alph, alph2;
    char a[315];
    scanf("%d",&n);
    scanf("%c",&space);
    while(n>0)
    {   int i=0,j=0,l,fl=0,ij=0;
        gets(a);
        l=strlen(a);

        for(i=65;i<91;i++)
        {   alph = i;
            alph2 = i+32;
            for(j=0;j<l;j++)
            {
                if(alph==a[j]||alph2==a[j])
                {
                    break;
                }
            }
            if(j==l)
            {
             fl=1;
             break;}
        }

            if(fl==1)
                printf("%c\n",alph);
            else
                printf("~\n");
      n--;
    }

	return 0;
}
