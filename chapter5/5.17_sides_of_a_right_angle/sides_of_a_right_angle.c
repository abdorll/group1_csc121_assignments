/*Write a function that reads three nonzero integers and determines whether they are the sides of a right-angled triangle. The function should take three integer
arguments and return 1 (true) if the arguments comprise a right-angled triangle, and 0 (false) otherwise. Use this function in a program that inputs a series of sets of integers.*/

#include <stdio.h>
#include <math.h>

//FUNCTION PROTOTYPE
int SidesOfRightTriangle(int side1, int side2, int side3);

//FUNCTION DEFINITION
int SidesOfRightTriangle(int side1, int side2, int side3){
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

int main(void){

    int a, b, c;
    int triangleNo = 1;
    printf("Triangle #%d\n", triangleNo);
    printf("Enter three sides of triangle in question(Input 0 for all sides to quit): ");
    scanf("%d%d%d", &a,&b, &c);

    while(a!=0 || b!=0 || c!=0){ //while none of the sides is equal to 0
        
        while(a<=0 || b<=0 || c<=0){ //If user inputs wrong value for length of sides
                puts("INVALID input!!!!Length of sides must be a  positive integer\n");
                printf("Enter three sides of triangle in question(Input 0 for all sides to quit): ");
                scanf("%d%d%d", &a,&b, &c);
                if(a==0 && b==0 && c==0){  //when user enters 0 0 0, it breaks out of this while loop
                break;
                } //End if
            } //End while

        if(a==0 && b==0 & c==0){  //when user enters 0 0 0, it breaks out of the overall while loop
            break;
        }//End if

        //Test for right angled triangle
        int isRightAngleTriangle = SidesOfRightTriangle(a, b, c);

        if( isRightAngleTriangle == 1){ //if isRightAngleTriangle is true
            printf("Triangle #%d is a right angle triangle.\n", triangleNo);
        }
        else{//if isRightAngleTriangle is false
            printf("Triangle #%d is not a right angle triangle.\n", triangleNo);
        }

        triangleNo++; 
        printf("\nTriangle #%d\n", triangleNo);
        printf("Enter three sides of triangle in question(Input 0 for all sides to quit): ");
        scanf("%d%d%d", &a,&b, &c);
    } //End while
} //End function main