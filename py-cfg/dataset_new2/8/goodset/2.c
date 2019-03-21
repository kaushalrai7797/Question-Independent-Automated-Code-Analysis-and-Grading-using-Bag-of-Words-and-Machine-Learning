#include <stdio.h>
#include <math.h>

int main(void) {
	int numOfTests = 0;
   scanf("%d", &numOfTests);
   while (numOfTests-- > 0)
   {
     int numOfHorses = 0;
     scanf("%d", &numOfHorses);
     int horses[numOfHorses];
     for (int i = 0; i < numOfHorses;i++)
        scanf("%d", &horses[i]);
    int min = 1000000000;
      for (int i = 0; i < (numOfHorses-1); i++)
        for (int j = i+1; j < numOfHorses; j++)
          if (abs(horses[i]-horses[j]) < min)
            min = abs(horses[i]-horses[j]);

    printf("%d\n", min);
   }
	return 0;
}
