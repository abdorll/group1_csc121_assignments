#include <stdio.h>
#include <math.h>

int main() {
    double x, y;

    while (1) {
        printf("Enter a number (or q to quit): ");
        
        if (scanf("%lf", &x) != 1) {
            break;
        }

        y = ceil(x + 0.5);

        printf("Original number: %.0f\n", x);
        printf("Rounded number: %.0f\n", y);
    }

    return 0;
}
