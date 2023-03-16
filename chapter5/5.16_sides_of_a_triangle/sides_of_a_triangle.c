#include <stdio.h>
#include <math.h>
double side1, side2, side3;
 int counter = 0; // initialize counter
void firstSideOfTriangle(){ //func. to get first side of triangle
    counter ++;
	printf("TRIANGLE #%d\n", counter);
    printf("Enter side #1 (-1 to cancel): ");
    scanf("%lf", &side1);
}
double areaDeterminant(double sideA, double sideB, double sideC){ //func. to determine area and returns its value
	double s, area;
	s = (sideA+sideB+sideC) / 2.0;
	area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
	return area;		 	
}
int main() {
    firstSideOfTriangle(); // (input), as user for 1st side of triangle.
    while(side1 !=-1){ //sentinel control iteration
		printf("Enter side #2 in (m): "); //asks for 2nd side of triangle
		scanf("%lf", &side2);
		printf("Enter side #3 in (m): "); //asks for 2nd side of triangle
		scanf("%lf", &side3);
		if (side1<=0 || side2<=0 || side3<=0){printf("Error!! All lengths must be valid!\n");} // if any of the inputs is invalid (<=0), gives err.
        else if ( side1+side2<side3 || side1+side3<side2 || side2+side3 < side1){ // if any side doesn't make a triangle...
            printf("These lengths doesn't form a triangle\n");} // gives err msg
        else{printf("Area of the triangle is: %.2lf m^2.\n", areaDeterminant(side1, side2, side3));} // else, when all input is valid, gives d area of the triangle
		puts("");
		firstSideOfTriangle(); //end of sentinel control iteration. asks user for input again to  restart d program
    }    
}