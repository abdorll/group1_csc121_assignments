// Paul Dietel C-How to program: Chapter5, Exercise 5.14
// Structure and Functions in C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function main - Code entry point
int main(void) {

  srand(time(NULL));

  printf("%d\n", 3*(rand()%10)+3); 

  printf("%d\n", 2*(rand()%9)+3);

  printf("%d\n", 5*(rand()%7)+3);

  return (0);
  
}// End function main