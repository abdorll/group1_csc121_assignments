#include <stdio.h>
#include<math.h>

double hypotenuse(double opposite, double adjacent){ 
    double hypotenuse = sqrt(pow(opposite, 2) + pow(adjacent, 2)); // func. to return hypotenuse
return hypotenuse;
}
double side1, side2; // declare the real 2  sides of the triangle (ie side1 & side2)
int counter = 0; //initialize counter to 0
void firstSideOfTriangle(){ //func. to get first input (ie the adj./opp. ie 1 of the sides) starting with printing TRIANGLE #num
    counter++;
    printf("TRIANGLE #%d\n", counter);
    printf("Enter side #1 in (m) (-1 to cancel): ");
    scanf("%lf", &side1);
}
int main(){
    firstSideOfTriangle(); //asks user for 1st input (side1)
    while(side1 != -1){
    printf("Enter side #2 in (m): "); //asks user for 1st input (side2)
    scanf("%lf", &side2);
    side1<=0||side2<=0  // checks if the 2 side are valid (ie are not <=0)
    ? puts("Error!! Both lengths must be valid!") // if not valid; prints err. mssg.
    : printf("Hypotenuse is: %.2f m.\n", hypotenuse(side1, side2)); // else (ie, it's valid and prints the hypotenuse)
    puts("");
    firstSideOfTriangle();
    }    
}