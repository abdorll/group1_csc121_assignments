/*Write a function that reads three nonzero integers and determines whether they are the sides of a right-angled triangle. The function should take three integer
arguments and return 1 (true) if the arguments comprise a right-angled triangle, and 0 (false) otherwise. Use this function in a program that input a series of sets of integers.*/
#include <stdio.h>
#include <math.h>
//FUNCTION DEFINITION
int sidesOfRightTriangle(int side1, int side2, int side3){
    if( (side1*side1) == side2*side2 + side3*side3){
        return 1; //it is a right angle triangle
    }
    else if ( (side2 *side2) == side1*side1 + side3*side3){
        return 1; //it is a right angle triangle
    }
    else if ( (side3*side3) == side1*side1 + side2*side2){
        return 1; //it is a right angle triangle
    }
    else{
        return 0; //it is not a right angle triangle
    }
}

int a, b, c, triangleNo = 0;
    
void input1(){
    triangleNo++;
    printf("TRIANGLE #%d\n", triangleNo);
    printf("Enter side #1 (-1 to quit): ");
    scanf("%d", &a);
} 
void input2And3(){
    printf("Enter side #2: ");
    scanf("%d", &b);
    printf("Enter side #3: ");
    scanf("%d", &c);
} 
int main(void){
    input1();
    while(a!=-1){ //while first sides is not equal to -1
    input2And3();
        while(a<=0 || b<=0 || c<=0){ //If user input wrong value for length of sides
                puts("\tINVALID input!! Length of sides 2 and 3 must be positive integers");
                triangleNo--;
                input2And3();
            } //End while
        int isRightAngleTriangle = sidesOfRightTriangle(a, b, c); //Test for right angled triangle
        if( isRightAngleTriangle == 1){ //if isRightAngleTriangle is true
            printf("%d, %d and %d MAKE a right-angled triangle.\n", a,b,c); //The 3 sides make a right-angled triangle
        }
        else{//if isRightAngleTriangle is false
            printf("%d, %d and %d DOESN'T make a right-angled triangle.\n", a,b,c); //The 3 sides doesn't make a right-angled triangle
        }
        puts("");
       input1();
    } //End while
} //End function main