#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main (){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    if (a>0 && a<9){
printf("the number %d is a digit",a);
    }
    else{
        printf("the number %d is not a digit",a);
    }
    return 0;
}