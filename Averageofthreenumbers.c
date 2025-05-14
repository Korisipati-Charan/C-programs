#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int x;
    printf("enter a number for x: ");
    scanf("%d",&x);
    int y;
    printf("enter a number for y: ");
    scanf("%d",&y);
    int z;
    printf("enter a number for z: ");
    scanf("%d",&z);
    printf("The average of the three numbers given by you is : %d \n",(x+y+z)/3);
}