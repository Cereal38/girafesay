
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "tamagoshi_girafe.h"

// Allow to clear screen using clear()
#define clear() printf("\033[H\033[J")

int randomNumber(int min, int max) {
	/* Generate a random number between min and max value */
	
	srand(time(NULL));
   	int random = (rand() % (max - min + 1)) + min;	
	
	return random;
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

	int loop = 1;
	
	clear();

	girafeState(fitness);
// Allow to clear screen using clear()
#define clear() printf("\033[H\033[J")
	// We do this to avoid same seed for crop and digestion (random gen)
	crop = randomNumber (-3, 3);

	// Loop while food value is incorrect
	while (loop == 1) {
		
		printf("Your stock value : %d\n", *stock);
		printf("How much did you feed your beautiful girafe ? ");
		scanf("%d", &lunchfood);	

		if (lunchfood < 0 || lunchfood > *stock) { printf("Incorrect food value ! Must be between 0 and %d\n", *stock); }
		else {
			*stock = max(*stock - lunchfood + crop, 0);
			
			if (crop < 0){ 
					printf ("You have %d rotten food, your stock value is %d.\n ", crop, *stock);
			}
			else if (crop > 0){
					printf("You harvested %d food units, your stock value is %d.\n", crop, *stock);
			}
			else {	printf("Nothing harvested. Your stock value is %d.\n", *stock);
			}
			
			loop = 0;
		}

		sleep(2);
	}

	digestion = randomNumber(-3, 0);
	
	*fitness = *fitness + lunchfood + digestion;
	
}

void girafeState (int *fitness){
	/* Manage girafe state */

	// byebyelife
	if (*fitness <= 0 || *fitness >= 10 ) {
		
		clear();
		affiche_girafe("XX", "_", 6, "");

		sleep(2);
		
		clear();
		printf("  ___†____\n /        \\\n|   GAME   |\n|   OVER   |\n|          |\n|__________|\n");
	}
	// lifesucks
	else if (*fitness <= 3 || *fitness >= 7) {  affiche_girafe("@@", "~", 6, ""); }
	// liferocks
	else { affiche_girafe("^^", "v", 6, ""); }
}
