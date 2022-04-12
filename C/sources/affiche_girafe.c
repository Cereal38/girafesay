#include <stdio.h>


void affiche_girafe(char * eyes, char * mouth, int neck) {
	printf ("            o o     /\n	  (\\|_|/)  /\n	  /     \\ /\n	 (  %c%c%c  )\n	  \\     /\n	   \\___/\n", eyes[0], mouth[0] ,eyes[1]);

	for (int i = 0; i < neck; i++){ printf("            | |\n"); }

	printf ("	   /   \\\n	  /    #\\\n	 |##     |\n	 |#   ## |\\\n	 \\   _#  / |\n	  | / \\ || w\n	  |||  |||\n	  ||v  ||v\n	  ||   ||\n	  vv   vv\n");
}
