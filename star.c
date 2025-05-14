#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int a;
    for(a=1;a<=20;a++){
        printf("*");
        if (a%5==0){
            printf("\n");
        }
    }
}