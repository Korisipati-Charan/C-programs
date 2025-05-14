#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    printf("enter n value : ");
    scanf("%d",&n);
    while (n>0){
    printf("%d \n",n);
    n-=1;
    }
}