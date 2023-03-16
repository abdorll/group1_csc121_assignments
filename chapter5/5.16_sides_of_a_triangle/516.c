#include <stdio.h>
#include <math.h>
void triangle();
void areaDeterminant(double sideA, double sideB, double sideC);
double side1, side2, side3;
int main() {

    triangle();
    while(side1 !=-1)
	{
		printf("Enter side #2: ");
		scanf("%lf", &side2);
		printf("Enter side #3: ");
		scanf("%lf", &side3);
		areaDeterminant(side1, side2, side3);
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
void areaDeterminant(double sideA, double sideB, double sideC)
{
	double s, area;
	s = (sideA+sideB+sideC) / 2.0;
	area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));

	if (sideA<=0 || sideB<=0 || sideC<=0)
	{ printf("Enter valid numbers\n"); }

	else if ( sideA+sideB<sideC || sideA+sideC<sideB || sideC+sideB < sideA)
	{ printf("These numbers doesn't form a triangle\n"); }

	else
	{ printf("Area of the triangle is: %.2lf\n", area);}
		 	
}

