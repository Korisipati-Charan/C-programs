#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter n value :");
    scanf("%d",&n);
    int i=1;
    while (i<=10){
        printf("%d into %d =%d\n",n,i,n*i);
        i+=1;
    }
}