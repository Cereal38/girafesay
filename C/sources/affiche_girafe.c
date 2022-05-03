
#include <stdio.h>
#include <string.h>


void affiche_girafe(char * eyes, char * mouth, int neck, char* text) {
	
	printf("		     ");
	for (int i = 1; i < strlen(text)+1; i++) {
		printf("%c", text[i-1]);
		if (i % 50 == 0){
			printf("\n 		     ");
		}
	}
	

	printf("\n");
	if (strlen(text) == 0){
		printf ("            o o     \n	  (\\|_|/)  \n	  /     \\ \n	 (  %c%c%c  )\n	  \\     /\n	   \\___/\n", eyes[0], mouth[0] ,eyes[1]);}
	else {
		printf ("            o o     / \n	  (\\|_|/)  / \n	  /     \\ /\n	 (  %c%c%c  )\n	  \\     /\n	   \\___/\n", eyes[0], mouth[0] ,eyes[1]);}

	for (int i = 0; i < neck; i++){ printf("            | |\n"); }

	printf ("	   /   \\\n	  /    #\\\n	 |##     |\n	 |#   ## |\\\n	 \\   _#  / |\n	  | / \\ || w\n	  |||  |||\n	  ||v  ||v\n	  ||   ||\n	  vv   vv\n");
}
