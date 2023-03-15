#include <stdio.h> 
void rectangleTopAndBottom(int width,char character){
    for (int i=0; i<width ; i++){
        printf("%c ", character);
    }
    puts("");
}
void rectangleBody(int width, char character){
    for (int i=0; i<width ; i++){
        printf(i==0||i==width-1? "%c ": "  ", character);
    }
    puts("");
}
void rectangle(int width, int height,char character){
  for (int i=0; i<height ; i++){
      if (i==0||i==height-1){
        rectangleTopAndBottom(width, character );
   }   else{
    rectangleBody(width, character);
   }
    }  
}
int main(){
int width, height;
char character = "*";
printf("Enter character: ");
scanf("%c",&character);
printf("Enter side #1 (width): ");
scanf("%d",&width);
printf("Enter side #1 (height): ");
scanf("%d",&height);
rectangle(width, height, character);
    return 0;
}