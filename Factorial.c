#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    int i;
    printf("Enter the number: ");
    scanf("%d",&n);
    int final=1;
    if (n>0){for(i=n;i>0;i--){
        final=final*i;
    }
    printf("%d",final);}
    else if(n==0){
        printf("%d",1);
    }
    else{
        printf("the answer is imaginary");
    }
}