
#include <stdio.h>
#include <string.h>
#include "tamagoshi_girafe.h"


void initDefault(automat *A){
/* Init an automat with default values */

	A->nbStates = MAX_NB_STATES;
	A->initialStates = 0;
	for (int i = 0; i < MAX_NB_STATES; i++) { A->finalStates[i] = 0; }
	for (int i = 0; i < MAX_NB_STATES; i++) {

		for (int j = 0; j < MAX_NB_ENTRIES; j++) { A->transitions[i][j] = i; }
	}
	for (int i = 0; i < MAX_NB_STATES; i++) {

		for (int j = 0; j < MAX_NB_ENTRIES; j++) { strcpy(A->outputs[i][j], "Invalid entry"); }
	}
}


void initAutomat(automat *A) {
/* Init an automat with values needed for the tamagoshi */

	initDefault(A);
	A->nbStates = 3;
	A->transitions[0]['+'] = 1;
	A->transitions[0]['='] = 0;
	A->transitions[1]['-'] = 0;
	A->transitions[1]['='] = 1;
	A->transitions[1]['+'] = 2;
}
