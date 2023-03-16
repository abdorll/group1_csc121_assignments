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

//VARIABLE DECLARATION & INITIALIZATION PHASE
int x;
int index=0;

//Function that prompts user to input number
void input(){
    index++;
    printf("EVEN OR ODD #%d\n", index);
    printf("Enter a number(0 to quit): ");
    scanf("%d", &x);
}

int main(void){
    input();
    while(x != 0){
        int isEvenOrOdd = evenOrOdd(x); //test if number inputted is EVEN or ODD

        if (isEvenOrOdd == 1){ //if isEvenOrOdd is 1 (true)
            printf("%d is an EVEN number.\n\n" ,x);
        }

        else{//if isEvenOrOdd is 0 (false), number is ODD
            printf("%d is an ODD number.\n\n", x);
        }

        input();
    }


}
