#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void changeLength(int* legsLength, int* nextLength, int legsMustGrow, int neckMustGrow);
int switchColor(int colorValue);	

int main(int argc, char* argv[]) {
	
	int danceTime;
	int legsLength = 8;
	int neckLength = 1;
	int legsMustGrow = 0;
	int neckMustGrow = 1;
	int colorValue = 31;


	sscanf(argv[1], "%d", &danceTime);

	for (int i = 0; i < danceTime; i++) {
		
		for (int switchGrow = 0; switchGrow < 7; switchGrow++) {
			
			printf("\033[0;%dmHAUT DE LA GIRAFE\n\033[0m\n", colorValue);

			for (int neck = 0; neck < neckLength; neck++) { printf("\033[0;%dm||\n\033[0m", colorValue); }
			for (int legs = 0; legs < legsLength; legs++) { printf("\033[0;%dm=\n\033[0m", colorValue); }

			printf("\033[0;%dmBAS DE LA GIRAFE\n\033[0m\n", colorValue);

			changeLength(&legsLength, &neckLength, legsMustGrow, neckMustGrow);
			colorValue = switchColor(colorValue);

			usleep(140000);
			system("clear");
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

