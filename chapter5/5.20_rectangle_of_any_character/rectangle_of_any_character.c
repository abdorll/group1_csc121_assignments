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

int width, height;
void input(){
    printf("Enter side #1 (width) [-1 to quit]: ");
scanf("%d",&width);
}
int main(){
char character = "*";
printf("Enter character: ");
scanf("%c",&character);
input();
while(width!=-1){
printf("Enter side #1 (height): ");
scanf("%d",&height);
rectangle(width, height,character);
input();
}
 return 0;
}