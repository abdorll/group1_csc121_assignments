#include <stdio.h>

int hour;
float hourlyRate, salary;
void calculateSalary(int employeeIndex){
int fortyHours = 40;
printf("Enter hourly rate of the worker ($00.00): \n"); 
    scanf("%f", &hourlyRate);
   salary= hour>fortyHours?  ((hourlyRate*hour)+0.5*hourlyRate):(hour*hourlyRate);
    printf("Salary is: $%.2f \n", salary);
    printf("\nEmployee #%d\n", employeeIndex);
printf("Enter # of hours worked (-1 to end): \n");
    scanf("%d", &hour); 
};
int main(){
    int  noOfTimeProcessed=1; 
    printf("\nEmployee #%d\n", noOfTimeProcessed);
printf("Enter # of hours worked (-1 to end): \n");
    scanf("%d", &hour);
    while(hour!=-1.00){
    noOfTimeProcessed++;
    calculateSalary(noOfTimeProcessed);
    };
    return 0;
}

