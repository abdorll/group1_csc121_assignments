#include <stdio.h>
float sales, salary=0.0;
void salesCommision(int salesPersonIndex){ 
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
    salesCommision(salesPersonIndex);
    }; 
    return 0;
}