#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "../headers/girafe.h"


int main (int argc, char * argv[]) {
	
	char * eyes="..";
	char * mouth="_";
	int neck = 6; 

	// Balaye tout les éléments de argv[]
	for (int i=1; i<=argc-1; i++) {
			

		// Si argument est --eyes (ou -e)
		if (strcmp(argv[i], "-e") == 0 || strcmp(argv[i], "--eyes") == 0) {
			
			// Vérifie la longueur de la chaîne donnée pour les yeux
			if (strlen(argv[i+1]) == 2) { eyes = argv[i+1]; }
			else { printf("[ERREUR] - Bad argument for --eyes\n"); return 1; };

	       	};


		// Si argument est --mouth (ou -m)
		if (strcmp(argv[i], "-m") == 0 || strcmp(argv[i], "--mouth") == 0) {
			
			// Vérifie la longueur de la chaîne donnée pour la bouhe
			if (strlen(argv[i+1]) == 1) { mouth = argv[i+1]; }
			else { printf("[ERREUR] - Bad argument for --mouth\n"); return 1; };

	       	};


		// Si argument est --neck (ou -n)
		// Converti le char en entier
		if (strcmp(argv[i], "-n") == 0 || strcmp(argv[i], "--neck") == 0) {

			sscanf(argv[i+1], "%i", &neck);
			if (!(neck <= 40 && neck > 0)) { 
				
				printf("ERROR : Neck length too long (%d) | Must be between 0 and 40.\n", neck);
				neck = 6;
			}
		}

		if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--prophunt") == 0) {
		
			
		}
	}

	

	// PROP HUNT
	affiche_girafe(eyes, mouth, neck);
	
	return 0;

};


