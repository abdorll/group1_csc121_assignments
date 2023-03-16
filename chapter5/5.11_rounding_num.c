#include <stdio.h>
#include <math.h>

double roundToInteger(double number) {
    return floor(number + 0.5);
}

double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundredths(double number) {
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}

int main() {
    double x;
    printf("Enter a number: ");
    scanf("%lf", &x);
    
    printf("Original value: %lf\n", x);
    printf("Rounded to integer: %f\n", roundToInteger(x));
    printf("Rounded to tenths: %f\n", roundToTenths(x));
    printf("Rounded to hundredths: %f\n", roundToHundredths(x));
    printf("Rounded to thousandths: %f\n", roundToThousandths(x));
    
    return 0;
}
