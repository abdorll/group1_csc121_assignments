#include <stdio.h>
#include <math.h>
double x, y=0; //initialize x and y to 1
int counter=0;
void askForX(){
counter++; //increment counter
printf("ROUND NUMBER #%d\n", counter);
 printf("Enter a number (-1 to quit): ");
        scanf("%lf", &x); // asks user input (x)
}
int main() {
    askForX();
    while (x!=-1) { //Sentinel control iteration to allow exiting the program
        y = ceil(x + 0.5); //round-up (x) to the nearest integer and store in y
        printf("Original number: %.0f \nRounded number: %.0f\n\n", x,y); // prints original numb. and rounded-up numb
    askForX();
    }

    return 0;
}
