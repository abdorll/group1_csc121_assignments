#include <stdio.h>
float sales, salary=0.0;
void salesCommission(int salesPersonIndex){ 
    salary = 200+(sales*0.09);
    printf("Salary is: $%.2f\n", salary);
    printf("\nSales Program #%d\n", salesPersonIndex);
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
};
int main(){
    int salesPersonIndex = 1;
    printf("\nSales Program #%d\n", salesPersonIndex);
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    while (sales!=-1){
    salesPersonIndex++;
    salesCommission(salesPersonIndex);
    }; 
    return 0;
}