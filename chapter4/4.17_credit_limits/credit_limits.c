#include <stdio.h>

struct Customer
{
    int accountNumber;
    int previousCreditLimit;
    int currentBalance;
};
int processed =0;
int main(){
struct Customer allCustomersList[3];
struct Customer newCustomersList[3];
    for(int i=0; i<3; i++){
        processed++;
        printf("\nCUSTOMER #%d\n", processed);
        printf("Enter account number: \n");
        scanf("%d",&allCustomersList[i].accountNumber);
        printf("Enter previous credit limit: \n");
        scanf("%d",&allCustomersList[i].previousCreditLimit);
        printf("Enter current balance: \n");
        scanf("%d",&allCustomersList[i].currentBalance);
        newCustomersList[i] = allCustomersList[i];
        } 
        for(int i=0; i<3; i++){
            //0,1,2
           allCustomersList[i]= newCustomersList[i];
        }
            int numb =0;
            puts("");
            puts("CUSTOMERS\tCREDIT LIMIT");
            for (int i = 0; i<3; i++){
                int creditLimit = allCustomersList[i].previousCreditLimit/2;
                numb ++;
        printf("Customer #%d\t%d\n",allCustomersList[i].accountNumber, creditLimit );
    }
printf("\nCUSTOMER(S) WITH CB. THAT EXCEEDS THEIR NEW CL.\n");
    int isAvailable=0;
    for (int i = 0; i<3; i++){
        int creditLimit = allCustomersList[i].previousCreditLimit/2;
        if (allCustomersList[i].currentBalance>creditLimit){
        isAvailable++;
          printf("Customer #%d\n", allCustomersList[i].accountNumber);  
                   }
    }
    printf(isAvailable==0?"There is no customer with CB above CL":"");

 
}