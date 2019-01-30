#include <stdio.h>
#include <string.h>
#define NAME_LIMIT 15

int main() {
	int t, nl, persons;
	char name[NAME_LIMIT];
	scanf("%d", &t);

	while (t--) {
		int heroes = 0, villains = 0, over = 0;
		scanf("%d", &persons);
		while (persons--) {
	  	scanf("%s", name);
		  nl = strlen(name);
		  if (nl > 3 && name[nl-3] == 'm' && name[nl-2] == 'a' && name[nl-1] =='n')
  			heroes++;
	  	else
		  	villains++;
			if (heroes >= villains + 2) {
				printf("superheroes\n");
				over = 1;
			} else if (villains >= heroes + 3) {
				printf("villains\n");
				over = 1;
			}
		}
		if (over != 1) {
			if (villains == 0 && heroes > 0)
				printf("superheroes\n");
			else if (heroes == 0 && villains > 0)
				printf("villains\n");
			else
				printf("draw\n");
		}
	}
}
