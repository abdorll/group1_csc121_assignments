#include <stdio.h>
//FUNCTION DEFINITION
int evenOrOdd (int num){
    if(num%2 == 0){
        return 1; //it is an even number
    }
    else{
        return 0; //It is an odd number
    }
}
int x, index=0;
void input(){
    index++;
    puts(""); // creates single line space, similar to \n
    printf("EVEN OR ODD #%d\n", index);
    printf("Enter a number(0 to quit): ");
    scanf("%d", &x);
}
int main(void){
    input();
    while(x != 0){
        int isEvenOrOdd = evenOrOdd(x); //test if number inputted is EVEN or ODD
        if (isEvenOrOdd == 1){ //if isEvenOrOdd is 1 (true)
            printf("%d is an EVEN number.\n" ,x);
        }
        else{//if isEvenOrOdd is 0 (false), number is ODD
            printf("%d is an ODD number.\n", x);
        }
     input();
    }


}