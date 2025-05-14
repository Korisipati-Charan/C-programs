#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int arr[2][10];
    int a=2;
    int b=3;
    for(int i=0;i<=9;i++){
        arr[0][i]=a*(i+1);
        printf("%d * %d =%d\n",a,i+1,arr[0][i]);
    }
    printf("\n");
    for(int i=0;i<=9;i++){
        arr[1][i]=b*(i+1);
        printf("%d * %d =%d\n",b,i+1,arr[1][i]);
    }
}