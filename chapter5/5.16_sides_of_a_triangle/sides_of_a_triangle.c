#include <stdio.h>
#include <math.h>
double side1, side2, side3, s, area;
void areaDeterminant(double sideA, double sideB, double sideC){
        s = (sideA+sideB+sideC)/2.0;
        area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
        sideA<=0||sideB<=0||sideC<=0?printf("Enter valid numbers\n"):
        sideA+sideB<sideC||sideA+sideC<sideB||sideC+sideB<sideA?
        printf("These numbers doesn't form a triangle\n"):
        printf("Area of the triangle is: %.2lf\n", area);
    }
int index=0;
void input1(){
    index++;
    printf("TRIANGLE #%d\nEnter side #1 (-1 to cancel): ", index);
    scanf("%lf", &side1);}
int main() {
    input1();
    while(side1!=-1){
    printf("Enter side #2: ");
    scanf("%lf", &side2);
    printf("Enter side #3: ");
    scanf("%lf", &side3);
    areaDeterminant(side1, side2, side3);
    puts("");
    input1();
    }    
    return 0;
}
