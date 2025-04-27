#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define NUM_SUITS 4
#define NUM_RANKS 13


int main() {
	
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_hand,suit,rank;
	char suit_num[] = { 'C','D','H','S'};
	char rank_num[] = { '2','3','4','5','6','7','8','9','T','J','Q','K','A'};

	srand((unsigned)time(NULL));

	printf("Enter numbers need have:");
	scanf("%d", &num_hand);

	if(num_hand<1|| num_hand > NUM_SUITS * NUM_RANKS)
	printf("Please enter a number between 1 and %d.\n", NUM_SUITS * NUM_RANKS);
	
	printf("Your in_hand card:\n");
	while(num_hand > 0) {
		
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		
		if (!in_hand[suit][rank]) {
			in_hand[suit][rank] = true;
			printf("%c%c\n", suit_num[suit], rank_num[rank]);
			num_hand--;

		}
		
	}
	return 0;
}