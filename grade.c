#include <stdio.h>

void main(){
    float per;
    char grade;
    printf("Enter the percentage \n");
    scanf("%f", &per);
    if(per >= 90)
      grade = 'A';
    else if(per >= 80 && per < 90)
      grade = 'B';
    else if(per >= 70 && per < 80)
      grade = 'C';
    else if(per >= 60 && per < 70)
      grade = 'D';
    else
      grade = 'E';
    switch(grade){
        case 'A': printf("\n Excellent \n"); break;
        case 'B': printf("\n Very good \n"); break;
        case 'C': printf("\n Good \n"); break;
        case 'D': printf("\n Average \n"); break;
        case 'E': printf("\n Satisfactory \n"); break;
    }
    printf("Percentage = %f and grade = %c", per, grade);
}