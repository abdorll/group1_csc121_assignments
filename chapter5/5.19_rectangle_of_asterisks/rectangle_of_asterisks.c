#include <stdio.h>
void rectangleTopAndBottom(int width){
    for (int i=0; i<width ; i++){
        printf("* ");
    }
    puts("");
}
void rectangleBody(int width){
    for (int i=0; i<width ; i++){
        printf(i==0||i==width-1? "* ": "  ");
    }
    puts("");
}
void rectangle(int width, int height){
  for (int i=0; i<height ; i++){
      if (i==0||i==height-1){
        rectangleTopAndBottom(width);
   }   else{
    rectangleBody(width);
   }
    }  
}
int width, height;
void input(){
    printf("Enter side #1 (width) [-1 to quit]: ");
scanf("%d",&width);
}
int main(){
input();
while(width!=-1){
printf("Enter side #1 (height): ");
scanf("%d",&height);
rectangle(width, height);
input();
}
 return 0;
}