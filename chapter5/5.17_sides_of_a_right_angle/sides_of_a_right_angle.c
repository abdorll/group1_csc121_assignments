#include <stdio.h>
#include <stdbool.h>
int squareNum(int number){
    return number*number;
}
bool determineRightAngle(int sidea, int sideb,int sidec){ 
    return squareNum(sidea)+squareNum(sideb)==squareNum(sidec);
}

int side1, side2, side3 =0;
int setIndex=0;
int main(){
    setIndex++;
    printf("NUMBER SET #%d", setIndex);
    puts("");
    printf("Enter side #1 ");
    scanf("%d", &side1);
    while(side1 !=-1){
    printf("Enter side #2 ");
    scanf("%d", &side2);
    printf("Enter side #3 ");
    scanf("%d", &side3);
    printf((determineRightAngle(side1, side2, side3)||
    determineRightAngle(side2, side3, side1)||
    determineRightAngle(side1, side3, side2))==true?
   "%d, %d and %d MAKE a right-angled triangle": "%d, %d and %d DOESN'T make a right-angled triangle", side1, side2, side3);
    puts("\n");
    setIndex++;
    printf("NUMBER SET #%d", setIndex);
    puts("");
    printf("Enter side #1 ");
    scanf("%d", &side1);
    }
    return 0;
}