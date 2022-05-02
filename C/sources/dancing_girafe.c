
#include <stdio.h>
#include <unistd.h>

// Allow to clear screen using clear()
#define clear() printf("\033[H\033[J")

void changeLength(int* legsLength, int* neckLength, int legsMustGrow, int neckMustGrow);
int switchColor(int colorValue);


void dancing_girafe(int duration) {

	int legsLength = 8;
	int neckLength = 1;
	int legsMustGrow = 0;
	int neckMustGrow = 1;
	int colorValue = 31;

	for (int i = 0; i < duration; i++) {
		
		for (int switchGrow = 0; switchGrow < 7; switchGrow++) {
			
			printf("\033[0;%dm            o o      \n	  (\\|_|/)   \n	  /     \\  \n	 (  UwU  )\n	  \\     /\n	   \\___/\n\033[0m", colorValue);

			for (int neck = 0; neck < neckLength; neck++) { printf("\033[0;%dm            | |\n\033[0m", colorValue); }

			printf("\033[0;%dm	   /   \\\n	  /    #\\\n	 |##     |\n	 |#   ## |\\\n	 \\   _#  / |\n	  | / \\ |  w\033[0m\n", colorValue);

			for (int legs = 0; legs < legsLength; legs++) { printf("\033[0;%dm	  ||   ||\n\033[0m", colorValue); }
			printf("\033[0;%dm	  vv   vv\n\033[0m\n", colorValue);
			changeLength(&legsLength, &neckLength, legsMustGrow, neckMustGrow);
			colorValue = switchColor(colorValue);

			//FAIRE LE TEMPS ET LA BOULE DISCO

			usleep(140000);
			clear();	
		}
		
		if (legsMustGrow == 0) { legsMustGrow = 1; neckMustGrow = 0; }
		else { legsMustGrow = 0; neckMustGrow = 1; }
	}
}

void changeLength(int* legsLength, int* neckLength, int legsMustGrow, int neckMustGrow) {
	
	if (neckMustGrow == 1) { *neckLength = *neckLength + 1; }
	else { *neckLength = *neckLength - 1; }

	if (legsMustGrow == 1) { *legsLength = *legsLength + 1; }
	else { *legsLength = *legsLength - 1; }
}

int switchColor(int colorValue) {
	
	if (colorValue == 37) { return 31; }
	else { return colorValue+1; }
}


