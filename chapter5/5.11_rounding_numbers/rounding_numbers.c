#include <stdio.h>
#include <math.h>
double x,y=0;
int main(){
    //y = floor(x * 100 + .5) / 100;
    printf("Enter x: ");
    scanf("%lf",&x);
    while (x!=-1){
    y = floor(x*10 + 0.5)/10;
    printf("floor  = %lf",y);
    puts("");
    printf("\nEnter x: ");
    scanf("%lf",&x);
    }
    return 0;
}