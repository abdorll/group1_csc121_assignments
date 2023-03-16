
#include <stdio.h>

int main(void){

    //VARIABLE DECLARATION AND INITIALIZATION PHASE
    int productNo, day, quantitySoldPerDay;
    float totalRetailValue = 0;
    float retailValuePerDay = 0;
    float retailValue, retailPrice;

    for(day=1; day<=7; day++){ //For each day of the week
        retailValuePerDay=0;
        printf("DAY %d: \n", day);
        printf("Enter product number (-1 to end):  ");
        scanf("%d", &productNo);
            
        while(productNo != -1){

            if(productNo >=1 && productNo <=5){ 
                switch(productNo){
                    case 1:
                        retailPrice = 2.98;
                        break;

                    case 2:
                        retailPrice = 4.50;
                        break;
                        
                    case 3:
                        retailPrice = 9.98;
                        break;
                        
                    case 4:
                        retailPrice = 4.49;
                        break;
                        
                    case 5:
                        retailPrice = 6.87;
                        break;
                } //End switch
                
                printf("Enter quantity sold for one day: ");
                scanf("%d", &quantitySoldPerDay);
                
                retailValue = retailPrice * quantitySoldPerDay;
                retailValuePerDay+=retailValue;
            } //End if 

            else{
                printf("\nProduct %d is not available!\n", productNo);
                puts("PRODUCT MUST BE FROM 1 TO 5!\n");
            } //End else
            
            printf("Enter product number (-1 to end): ");
            scanf("%d", &productNo);
        } //End while loop
            printf("Total retail value for day %d : $ %.2f\n\n",day, retailValuePerDay);
    
        totalRetailValue+=retailValuePerDay;
    } //End for loop
    printf("\nTotal retail value for one week : $ %.2f", totalRetailValue);
}

