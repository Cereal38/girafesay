
#ifndef __AUTOMAT__
#define __AUTOMAT__

#define MAX_NB_STATES 128
#define MAX_NB_ENTRIES 128
#define MAX_NB_OUTPUTS 128

typedef struct {

	int nbStates;
	int initialStates;
	int finalStates[MAX_NB_STATES];
	int transitions[MAX_NB_STATES][MAX_NB_ENTRIES];
	char outputs[MAX_NB_STATES][MAX_NB_ENTRIES][MAX_NB_OUTPUTS];
} automat;

void initAutomat(automat *A);

void simulateAutomat(automat *A);

#endif
