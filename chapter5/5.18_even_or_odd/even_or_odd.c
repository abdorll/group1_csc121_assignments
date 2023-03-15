#include <stdio.h>
int main(){
    int input;
    while (input !=-1){
        printf("Enter number (-1 to end): ");
        scanf("%d", &input);
        printf(input%2==0? "1: %d is even": "0: %d is odd", input);
        puts("");
        
    }
    return 0;
}