#include <stdio.h>
#include <stdlib.h> // generates func. to generate rand. numb. with
#include <time.h> //allows to generate rand func. in realtime
int yesOrNo = 1;
int counter =0;
void askToGenerateRandomNumber(){
  counter ++;
    printf("RANDOM NUMBERS IN RANGE #%d\n", counter);
  printf("Begin generating Random Numbers (1=yes, 0=no): ");
  scanf("%d", &yesOrNo);
}
int main(void) { // Function main - Code entry point
  srand(time(NULL));
  askToGenerateRandomNumber();
  while(yesOrNo==1){
  int n; // Variable declaration
  // 1 <= n <= 6
  puts("Random Number Between: ");
  printf(" [1, 6] : ");
  n = 1 + rand() % 6;
  printf("%d\n", n);

  // 100 <= n <= 1000
  printf(" [100, 1000] : ");
  n = rand() % 1000 + 100;
  printf("%d\n", n);

  // 0 <= n <= 19
  printf(" [0, 19] : ");
  n = rand() % 19 + 0;
  printf("%d\n", n);

  // 1000 <= n <= 2222
  printf(" [1000, 2222] : ");
  n = rand() % 2222 + 1000;
  printf("%d\n", n);

  // -1 <= n <= 1
  printf(" [-1, 1] : ");
  n = rand() % 1 + (-1);
  printf("%d\n", n);

  // -3 <= n <= 11
  printf(" [-3, 11] : ");
  n = rand() % 11 + (-3);
  printf("%d\n", n);
  puts("");
  askToGenerateRandomNumber();
  }
  

}