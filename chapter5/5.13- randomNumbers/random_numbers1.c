// Paul Dietel C-How to program: Chapter5, Exercise 5.13
// Structure and Functions in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function main - Code entry point
int main(void) {

  srand(time(NULL));

  int n; // Variable declaration

  // 1 <= n <= 6
  printf("random number between [1,6] :\n");
  n = 1 + rand() % 6;
  printf("%d\n\n", n);

  // 100 <= n <= 1000
  printf("random number between [100,1000] :\n");
  n = rand() % 1000 + 100;
  printf("%d\n\n", n);

  // 0 <= n <= 19
  printf("random number between [0,19] :\n");
  n = rand() % 19 + 0;
  printf("%d\n\n", n);

  // 1000 <= n <= 2222
  printf("random number between [1000,2222] :\n");
  n = rand() % 2222 + 1000;
  printf("%d\n\n", n);

  // -1 <= n <= 1
  printf("random number in [-1,1] :\n");
  n = rand() % 1 + (-1);
  printf("%d\n\n", n);

  // -3 <= n <= 11
  printf("random number in [-3,11] :\n");
  n = rand() % 11 + (-3);
  printf("%d\n\n", n);


}