#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned short t;
    scanf("%hu\n", &t);
    while (t--)
    {
        unsigned short recipe1[26] = {}, recipe2[26] = {};
        char ingredient;
        while ((ingredient = getchar()) != ' ')
            ++recipe1[ingredient - 'a'];
        while ((ingredient = getchar()) != '\n')
            ++recipe2[ingredient - 'a'];
        bool chef_granama = true, actual_granama = true;
        for (unsigned short i = 0; i != 26; ++i)
        {
            //if an ingredient appear in one recipe but not int the other
            if (recipe1[i] && !recipe2[i] || !recipe1[i] && recipe2[i])
            {
                chef_granama = false;
                actual_granama = false;
                break;
            }
            //if the same ingredient appear different number of times in the two recipes
            if (recipe1[i] != recipe2[i])
                actual_granama = false;
        }
        if (chef_granama && actual_granama || !chef_granama)
            printf("YES\n");
        else
            printf("NO\n");
    }
}