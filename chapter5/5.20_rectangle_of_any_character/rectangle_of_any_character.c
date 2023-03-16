#include <stdio.h> 
void rectangleWidth(int width,char character){ //prints character (in row format) based on width numb.
    for (int i=0; i<width ; i++){
        printf("%c ", character); // character will be parsed-in in the main func.
    }
    puts("");
}
void rectangleHeight(int width, int height,char character){ //prints gotten width (No. of height times); forming the rectangle
  for (int i=0; i<height ; i++){
    rectangleWidth(width, character ); // character will be parsed-in in the main func.
    }  
}
int width, height;
void enterWidth(){
    printf("Enter side #1 (width) [-1 to quit]: "); //first get rectangle width
scanf("%d",&width);
}
int main(){
char character = "*"; //create variable that stores the character
printf("Enter character: "); 
scanf("%c",&character); //get/store variable that stores the character
enterWidth();
while(width!=-1){
printf("Enter side #2 (height): ");  // now get rectangle height
scanf("%d",&height);
rectangleHeight(width, height,character); //parse width, height & gotten character to form rectangle
enterWidth();
}
return 0;
}