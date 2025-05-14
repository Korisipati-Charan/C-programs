#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main(){
    int num=1;
	int a=2;
    int b=3;
    int c=pow(a,b,num);
    printf("The value of %d to the power of %d is %d\n",a,b,c);
}