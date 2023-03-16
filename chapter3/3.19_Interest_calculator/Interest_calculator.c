#include <stdio.h>

int main(void){

    //VARIABLE DECLARATION AND INITIALIZATION PHASE
    float principal,interestCharge,rate =0.0;
    int days;
    interestCharge=0;

    printf("Enter loan principal (-1 to end) : "); 
    scanf("%f", &principal);

    while (principal !=-1){

        printf("Enter interest rate : ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days : ");
        scanf("%d", &days);

        interestCharge = principal * rate * days/365;

        printf("The interest charge is $%.2f\n\n", interestCharge);

        printf("Enter loan principal (-1 to end) : ");
        scanf("%f", &principal);
    }//End while loop
} //End main function