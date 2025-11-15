#include <stdio.h>
//use of if...else...if statement
int main(){
    int marks;
    printf("Enter students marks");
    scanf("%d", marks);
    if(marks >=70){
        printf("A");
    }
    else if(marks >=60){
        printf("B");
    }
    else if(marks >=50){
        printf("C");
    }
    else if(marks >=40){
        printf("D");
    }
    else if(marks >=0){
        printf("E");
    }
    else
    printf("Invalid marks");
    return 0;
}