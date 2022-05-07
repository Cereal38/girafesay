
/* TO DO:

	- RANDOM NUMBER
	- MAKE FUNCTION GAME AND FINISH IT */

#include <stdio.h>
#include <stdlib.h>


int randomNumber(int min, int max) {
	/* Generate a random number between min and max value */

	return 0;
}

int max(int value1, int value2){
	/* Return the biggest number beween value1 and value2 */

	if (value1 > value2) {return value1;}
	else {return value2;}
}

void playRound(int* fitness, int* stock) {
	/* Play 1 round */

	int lunchfood = -1;
	int crop;
	int digestion;

	// Loop while food value is incorrect
	while (lunchfood < 0 || lunchfood > *stock) {
		
		printf("How much did you feed your beautiful girafe ? ");
		scanf("%d", &lunchfood);
		
		if (lunchfood < 0 || lunchfood > *stock) { printf("Incorrect food value ! Must be between 0 and %d\n", *stock); }
		else {
			crop = randomNumber (-3, 3);
			*stock = max(*stock - lunchfood + crop, 0);
			
			if (crop < 0){ 
					printf ("You have %d rotten food, your stock value is %d.\n ", crop, *stock);
			}
			else if (crop > 0){
					printf("You harvested %d food units, your stock value is %d.\n", crop, *stock);
			}
			else {	printf("Nothing harvested. Your stock value is %d.\n", *stock);
			}
		}
	}

	digestion = randomNumber(-3, 0);

	*fitness = *fitness + lunchfood + digestion;

	printf("%d\n", *fitness);
}

void girafeState (int *fitness){
	/* Manage girafe state */

	// byebyelife
	if (*fitness <= 0 || *fitness >= 10 ) { affiche_girafe("XX", "_", 6); }
	// lifesucks
	else if (*fitness <= 3 || *fitness >= 7) {  affiche_girafe("@@", "~", 6); }
	// liferocks
	else { affiche_girafe("^^", "v", 6); }
}
