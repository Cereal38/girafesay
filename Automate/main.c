
#include <stdio.h>
#include "tamagoshi_girafe.h"
#include <unistd.h>


// Allow to clear screen using clear()
#define clear() printf("\033[H\033[J")

int main (int argc, char* argv[]) {

	int fitness = 5;
	int stock = 5;

	// Intro speech
	clear();
	printf("############################\n");
	printf("# Keep your girafe alive ! #\n");
	printf("############################\n");
	
	sleep(2);

	while (fitness > 0 && fitness < 10) {

		playRound(&fitness, &stock);
	}

	girafeState(&fitness);
	

	return 0;
}

