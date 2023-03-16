// Paul Dietel C-How to program: Chapter4, Exercise 4.19
// Program control in C

#include <stdio.h>
// Function main - Code entry point
int main (void) {

	// Initializtion phase
	// Variable declaration
	int number[5];
	int input;

	for (int i = 0; i < 5; i++) {

		printf("Enter number #%d: ", i+1);
		scanf("%d", &input);

		while (input < 1 || input > 30) {
			puts("Input must be within 1-30!");
			printf("Enter number #%d: ", i+1);
			scanf("%d", &input);

		} // End while

		number[i] = input;

	} // End for

	puts("");
	puts("BAR CHART");

	for (int i = 0; i < 5; i++) {

		printf("%2d: ", number[i]);

		for (int j = 0; j < number[i]; j++) {

			printf("*");

		} // End for

		puts("");

	} // End for

	return(0);

} // End function main
