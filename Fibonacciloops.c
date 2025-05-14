#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    int fib0=0;
    int fib1=1;
    int fib2;
    int count;
    printf("Enter which fibonacci number you want: ");
    scanf("%d",&n);
    for(count=3;count<=n;count+=1){
        fib2=fib0+fib1;
        fib0=fib1;
        fib1=fib2;
    }
    printf("%d",fib2);
    return 0;
}