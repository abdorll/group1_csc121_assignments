#include <stdio.h>
double opposite, adjacent, hypotenuse;
void determineHypotenuse(double opposite, double adjacent){
hypotenuse = opposite*opposite + adjacent*adjacent;
opposite<=0||adjacent<=0? puts("Enter valid lengths"): printf("Hypotenuse is: %lf \n", hypotenuse);
}
int index =0;
void input1(){
    index++;
    printf("TRIANGLE #%d\nEnter side #1 (-1 to cancel): ", index);
    scanf("%lf", &adjacent);}
int main() {
    input1();
    while(adjacent!=-1){
    printf("Enter side #2: ");
    scanf("%lf", &opposite);
    determineHypotenuse(adjacent, opposite);
    puts("");
    input1();
    }    
    return 0;
}
