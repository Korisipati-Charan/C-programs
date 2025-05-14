#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int n;
    printf("enter n value : ");
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++){
    sum+=i;
    }
    printf("%d \n",sum);
    return 0;
}