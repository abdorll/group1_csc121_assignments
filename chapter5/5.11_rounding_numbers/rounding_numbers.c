#include <stdio.h>
#include <math.h>

double roundToInteger(double number) {
    return floor(number + 0.5); // rounds a number to integer
}
double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10; //rounds-up to the nearest 10th
}
double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100;  //rounds-up to the nearest 100th
}
double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;  //rounds-up to the nearest 1000th
}
double x; // declare c
int counter=0; // initialize counter
void askForX(){
counter++; //increment counter
printf("ROUND NUMBER #%d\n", counter);
 printf("Enter a number (-1 to quit): ");
        scanf("%lf", &x); // asks user input (x)
}
int main() {
    askForX();
    while(x!=-1){
        printf("Original value: %lf\nRounded to integer: %f\nRounded to tenths: %f\nRounded to hundredths: %f\nRounded to thousandths: %f\n\n",
     x,roundToInteger(x),roundToTenths(x), roundToHundredths(x),roundToThousandths(x));
    askForX();
    }
    return 0;
}
