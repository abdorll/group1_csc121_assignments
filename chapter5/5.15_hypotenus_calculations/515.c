#include <stdio.h>
#include<math.h>
double side1, side2;
void triangle();
void Hypotenuse(double opposite, double adjacent);

int main() 
{
    triangle();
    while(side1 != -1)
    {
        printf("Enter side #2: ");
        scanf("%lf", &side2);
        Hypotenuse(side1, side2);
        puts("");
        triangle();
    }    
}
void triangle()
{
    static unsigned int counter = 0;
    printf("TRIANGLE #%d\n", ++counter);
    printf("Enter side #1 (-1 to cancel): ");
    scanf("%lf", &side1);
}
void Hypotenuse(double opposite, double adjacent)
{
    double hypotenuse;
    hypotenuse = pow(opposite, 2) + pow(adjacent, 2);
    opposite<=0||adjacent<=0 ? puts("Enter valid lengths") : printf("Hypotenuse is: %.2f\n", sqrt(hypotenuse));
}