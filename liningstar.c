#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main(){
    int n;
    printf("enter the line range:");
    scanf("%d",&n);
    n=n+1;
    for(int i=0;i<n;i++){
        if (i>0){
            printf("\n");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
    }
}