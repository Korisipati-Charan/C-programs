#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int marks;
    printf("Enter marks :");
    scanf("%d",&marks);
    if (marks<30 && marks>=0){
        printf("your grade is C");
    }
    else if (marks>=30 && marks<70){
        printf("your grade is B");
    }
    else if (marks>=70 && marks<90){
        printf("your grade is A");
    }
    else if (marks>=90 && marks<=100){
        printf("your grade is A+");
    }
    else{
        printf("Invalid score");
    }
}