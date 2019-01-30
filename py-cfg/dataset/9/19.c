//
//  main.c
//  NB
//
//  Created by Rushi Patel on 11/05/18.
//  Copyright © 2018 Rushi Patel. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int N,B,n,i;
    scanf("%d",&i);
    for(int k=0;k<i;k++)
    {
    if(N<=B)
        {
            n=0;
        }
    else
        {
            scanf("%d",&N);
            scanf("%d",&B);
            n=(N*N/(4*B));
        }
    printf("%d",n);
    }
    return 0;
}
