#include <stdio.h>
struct EmployeeSlaryData{
int hour;
float hourlyRate, salary;
};
struct EmployeeSlaryData empSal;
void calculateSalary(int employeeIndex){
int fourtyHours = 40;
printf("Enter hourly rate of the worker ($00.00): \n"); 
    scanf("%f", &empSal.hourlyRate);
   empSal.salary= empSal.hour>fourtyHours?  ((empSal.hourlyRate*empSal.hour)+0.5*empSal.hourlyRate):(empSal.hour*empSal.hourlyRate);
    printf("Salary is $%.2f \n", empSal.salary);
    printf("\nEmployee #%d\n", employeeIndex);
printf("Enter # of hours worked (-1 to end): \n");
    scanf("%d", &empSal.hour); 
};
int main(){
    int  noOfTimeProcessed=1; 
    printf("\nEmployee #%d\n", noOfTimeProcessed);
printf("Enter # of hours worked (-1 to end): \n");
    scanf("%d", &empSal.hour);
    while(empSal.hour!=-1.00){ 
    noOfTimeProcessed++;
    calculateSalary(noOfTimeProcessed);
    };
    return 0;
}

