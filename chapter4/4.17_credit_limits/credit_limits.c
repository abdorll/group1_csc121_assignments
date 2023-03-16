#include <stdio.h>
struct Customer{ // create the customer structure (object)
    int accountNumber;
    int previousCreditLimit;
    int currentBalance;
};
int counter,accountNumber,previousCreditLimit,currentBalance =0; // initialize customers' data  to 0 
int main(){
struct Customer allCustomersList[3]; // create an array (list) of len. 3 that holds each customer's details
    for(int i=0; i<3; i++){
        counter++; // increment counter
        printf("\nCUSTOMER #%d\n", counter); // print customer's index the program is currently iterating through
        printf("Enter account number: \n");
        scanf("%d",&accountNumber); // get current customer's index account number
        printf("Enter previous credit limit: \n");
        scanf("%d",&previousCreditLimit); // get current customer's index account previous credit limit
        printf("Enter current balance: \n");
        scanf("%d",&currentBalance); // get current customer's index current balance
        //---------------------------Below code (assigns customer details gotten from above to customer at current index into the array of all customers' at the current index)
        allCustomersList[i].accountNumber=accountNumber; //assigns customer at current index's account number to the array of all customers account no. at the current index
        allCustomersList[i].previousCreditLimit=previousCreditLimit; //assigns customer at current index's prev. credit limit to the array of all customers' prev. credit limit at the current index
        allCustomersList[i].currentBalance=currentBalance; //assigns customer at current index's curr. bal. to the array of all customers' curr.bal. at the current index
        }
        puts("");
        puts("CUSTOMERS\tCREDIT LIMIT"); // prints customers in tabular form starts here
        for (int i = 0; i<3; i++){
            int creditLimit = allCustomersList[i].previousCreditLimit/2;
        printf("Customer #%d\t%d\n",allCustomersList[i].accountNumber, creditLimit );  // prints (CUSTOMER #accNo. & cred. lim.)  in a row
    }
    printf("\nCUSTOMER(S) WITH CB. THAT EXCEEDS THEIR NEW CL.\n"); // prints customers with CB. that exceeds their new CL. one after the other
    int isAvailable=0; //variable that increments (based on no. of customer with CB above CL). remains 0  if none found
    for (int i = 0; i<3; i++){
        int creditLimit = allCustomersList[i].previousCreditLimit/2;
        if (allCustomersList[i].currentBalance>creditLimit){
        isAvailable++;
          printf("Customer #%d\n", allCustomersList[i].accountNumber);  
                   }
    }
    printf(isAvailable==0?"There is no customer with CB above CL":""); //prints this when there's no customer with CB above CL

 
}