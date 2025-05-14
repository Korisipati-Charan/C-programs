#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int i;
    int count=0;
    for(i=1;i<=n;i+=1){
        if (n%i==0){
            count=count+1;
        }
    }
    if (n>1 && count==2){
        printf("yes it is a prime number");
    }
    else{
        printf("no it is not a prime number");
    }
    return 0;
}