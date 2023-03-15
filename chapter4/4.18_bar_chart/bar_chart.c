#include <stdio.h>

int main(){
    int nums[5];
    int input=0;
    for (int i = 0; i < 5; i++){
    printf("Enter number #%d: ", i+1);
    scanf("%d", &input);
    while(input<0||input>30){
    puts("🛑❗Input must be within 0-30❗🛑"); 
    printf("Enter number #%d: ", i+1);
    scanf("%d", &input);
    } 
    nums[i] = input;
    }
 puts(""); 
  puts("BAR CHART");
    for (int i = 0; i < 5; i++){
      nums[i]<10?printf("0%d: ",nums[i]):printf("%d: ",nums[i]);
        for(int j = 0; j <nums[i]; j++){
            printf("*");
        }
        puts("");
    }
    return 0;
}