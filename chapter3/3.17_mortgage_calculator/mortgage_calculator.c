#include <stdio.h>

int main (void)
{
    int accountNumber,mortgageAmount,mortgageTerm=0;
    float interestRate;
    
    printf("%s" , "Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    
    while ( accountNumber !=-1)
    {
        printf("%s", "Enter mortgage amount (in dollars): ");
        scanf("%d", &mortgageAmount);
        
        printf("%s", "Enter mortgage term (in years): ");
        scanf("%d", &mortgageTerm);
        
        printf("%s", "Enter interest rate (as a decimal): ");
        scanf("%f", &interestRate);
        
        float totalInterest = mortgageAmount * interestRate * mortgageTerm;
        float totalAmount = mortgageAmount + totalInterest;
        float monthlyInterest = totalAmount / (mortgageTerm * 12);
        
        printf("The monthly payable interest is $ %.0f\n", monthlyInterest);
        puts("");
        
        printf("%s", "Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

    }

}
