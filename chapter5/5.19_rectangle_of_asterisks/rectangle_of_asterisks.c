#include <stdio.h>
void rectangleWidth(int width){ //prints character (in row format) based on width numb.
    for (int i=0; i<width ; i++){
        printf("* ");
    }
    puts("");
}
void rectangleHeight(int width, int height){ //prints gotten width (No. of height times); forming the rectangle
  for (int i=0; i<height ; i++){
      rectangleWidth(width);
    }  
}
int width, height;
void enterWidth(){
printf("Enter side #1 (width) [-1 to quit]: "); //first get rectangle width 
scanf("%d",&width);
}
int main(){
enterWidth();
while(width!=-1){
printf("Enter side #2 (height): "); // now get rectangle height
scanf("%d",&height);
rectangleHeight(width, height); //parse width & height to form rectangle
enterWidth();
}
 return 0;
}