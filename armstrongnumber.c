#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n,r,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum){
        printf("it is a armstrong number \n");
    }
    else{
        printf("it is not a armstrong number \n");
    }
}