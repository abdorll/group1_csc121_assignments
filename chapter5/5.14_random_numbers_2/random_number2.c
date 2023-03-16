#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wantToContinue = 1;
int counter =0;
void askToGenerateRandomNumber(){
  counter ++;
    printf("RANDOM NUMBERS IN RANGE #%d\n", counter);
  printf("Begin generating Random Numbers (1=yes, 0=no): ");
  scanf("%d", &wantToContinue);
}
// Function main - Code entry point
int main(void) {
  srand(time(NULL));
  askToGenerateRandomNumber();
  while (wantToContinue==1){
  printf(" [3, 30 ](+3) : ");
  printf("%d\n", 3*(rand()%10)+3);
  printf(" [3, 19 ](+2) : ");
  printf("%d\n", 2*(rand()%9)+3);
   printf(" [3, 33 ](+5) : ");
  printf("%d\n", 5*(rand()%7)+3);
  puts("");
  askToGenerateRandomNumber();
  }
  

  return (0);
  
}// End function main
