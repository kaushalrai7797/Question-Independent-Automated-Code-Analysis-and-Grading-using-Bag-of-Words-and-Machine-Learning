#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char voter[104];
        scanf("%s",&voter);
        int number_of_voters,i,flag_recent_found=0;
        number_of_voters= strlen(voter);
         char *s;
         int number_of_snakes,number_of_mongoose;

         s=voter;
         number_of_snakes=0;
         number_of_mongoose=0;
         while(*s != '\0')
         {
            if(*s =='s')
                number_of_snakes++;
            else if(*s == 'm')
                number_of_mongoose++;

            s++;
         }
        for(i=0;i<number_of_voters-1;i++)
        {
            if(  ((voter[i] == 'm' && voter[i+1] == 's') || (voter[i] == 's' && voter[i+1] =='m')) && flag_recent_found  ==0 )
            {
                flag_recent_found=1;
               // printf("snake is eaten by mongoose: %c %c\n",voter[i],voter[i+1]);
               number_of_snakes--;
            }
            else
                flag_recent_found=0;
        }

        if(number_of_snakes == number_of_mongoose)
            printf("tie\n");
        else if(number_of_snakes > number_of_mongoose)
            printf("snakes\n");
        else if(number_of_mongoose > number_of_snakes)
            printf("mongooses");

    }
    return 0;
}
