#include <stdio.h> 
int main(void){
    int productNo, day, quantitySoldPerDay;
    float totalRetailValue = 0;
    float retailValuePerDay = 0;
    float retailValue, retailPrice;
        for(day=1; day<=7; day++){
            retailValuePerDay=0;
            printf("DAY %d: \n", day);
            printf("Enter product number (-1 to end):  ");
            scanf("%d", &productNo);
            while(productNo != -1){
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
                    default:
                        puts("🛑❗PRODUCT NUMBER MUST BE WITHIN 1-5❗🛑");
                        retailPrice = 0;
                        printf("Enter another product number between from 1 to 5: ");
                        scanf("%d", &productNo);
                        break;
                }
                printf("Enter quantity sold for one day: ");
                scanf("%d", &quantitySoldPerDay);
                retailValue = retailPrice * quantitySoldPerDay;
                retailValuePerDay+=retailValue;
                printf("Enter product number (-1 to end): ");
                scanf("%d", &productNo);
            }
     printf("Total retail value for day %d : $%.2f\n\n",day, retailValuePerDay);
    totalRetailValue+=retailValuePerDay;
    }
    printf("\nTotal retail value for one week : $ %.2f", totalRetailValue);
}