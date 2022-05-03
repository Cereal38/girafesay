#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/girafe.h"


int main (int argc, char * argv[]) {
	
	char * eyes="^^";
	char * mouth="_";
	int neck = 6; 
	char text[2048] = "";

	
	// Stock an index (will be the start of the test) 
	int indexText = 1;

	// Check all elements of argv[]
	for (int i=1; i<=argc-1; i++) {
			

		// If arg is: --eyes (or -e)
		if (strcmp(argv[i], "-e") == 0 || strcmp(argv[i], "--eyes") == 0) {
			
			// Check the length of the given string for eyes
			if (strlen(argv[i+1]) == 2) { eyes = argv[i+1]; }
			else { printf("[ERREUR] - Bad argument for --eyes\n"); return 1; }

			indexText += 2;
		}

		// If arg is: --mouth (or -m)
		if (strcmp(argv[i], "-m") == 0 || strcmp(argv[i], "--mouth") == 0) {
			
			// Check the length of the givn string for the mouth
			if (strlen(argv[i+1]) == 1) { mouth = argv[i+1]; }
			else { printf("[ERREUR] - Bad argument for --mouth\n"); return 1; }

			indexText += 2;
		}

		// If arg is: --neck (or -n)
		// Convert the char in int
		if (strcmp(argv[i], "-n") == 0 || strcmp(argv[i], "--neck") == 0) {

			sscanf(argv[i+1], "%i", &neck);
			// Create a limit for the length of the neck
			if (!(neck <= 40 && neck > 0)) { 
				
				printf("ERROR : Neck length too long (%d) | Must be between 0 and 40.\n", neck);
				neck = 6;
			}

			indexText += 2;
		}
		

		// If arg is: --secret (or -s)
		if (strcmp(argv[i], "-s") == 0 || strcmp(argv[i], "--secret") == 0) {

			affiche_super_garcon_viande();
			return 0;
		}

		// If arg is: --prophunt (or -p)
		if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--prophunt") == 0) {
			
			eyes="^^";
			mouth="_";
			neck = 6; 

			srand( time(NULL) );
			// Generate a random number for the girafe position
			int posGirafe = rand() % 3 + 1;	
			
			// Printf all objects
			affiche_marteau();
			printf("\n\n");

			affiche_lit();
			printf("\n\n");

			affiche_table();
			printf("\n\n");

			int posUtil;
			// Ask to the user to guess the number
			printf("Guess the girafe's position : ");
			scanf("%d", &posUtil);

			// Check if the answer is beetween 1 and 3
			while (posUtil > 3 || posUtil < 1) {

				printf("Position must be a number between 1 and 3\n");
				printf("Guess the girafe's position : ");
				scanf("%d", &posUtil);
			}
			
			char* answer;
			// Generate the answer that the girafe will say 
			if (posUtil == posGirafe) { answer = "Congratulation !"; }
			else { answer = "Failed !"; }

			system("clear");
			
			// Spawn the girafe at the right position
			if ( posGirafe == 1 ) {

				affiche_girafe(eyes, mouth, neck, answer);
				printf("\n\n");

				affiche_lit();
				printf("\n\n");

				affiche_table();
				printf("\n\n");
			}

			else if ( posGirafe == 2 ) {

				affiche_marteau();
				printf("\n\n");

				affiche_girafe(eyes, mouth, neck, answer);
				printf("\n\n");

				affiche_table();
				printf("\n\n");
			}

			else if ( posGirafe == 3 ) {

				affiche_marteau();
				printf("\n\n");

				affiche_lit();
				printf("\n\n");

				affiche_girafe(eyes, mouth, neck, answer);
				printf("\n\n");
			}

			return 0;
		}

		// If the arg is: --dance (or -d)
		if (strcmp(argv[i], "-d") == 0 || strcmp(argv[i], "--dance") == 0) {
			
			int duration;

			// Check the argument given for duration 
			if (argv > 0) { sscanf(argv[i+1], "%d", &duration); }
			else { printf("[ERREUR] - Bad argument for --dance | Must be an integer higher than 0\n"); return 1; }
			
			dancing_girafe(duration);

			return 0;
		}
	}

	// Get the texte wich the girafe will say
	for (int j = indexText; j < argc; j++){

		strcat(text, argv[j]);
		strcat(text," ");

	}

	affiche_girafe(eyes, mouth, neck, text);
	
	return 0;

}


