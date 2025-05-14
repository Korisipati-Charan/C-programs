#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
int a;
printf("enter first number: ");
scanf("%d",&a);
int b;
printf("enter second number: ");
scanf("%d",&b);
int c;
printf("enter third number: ");
scanf("%d",&c);
 if (a<b && a<c){
    printf("smallest number:%d",a);
}
else if (b<c && b<a){
     printf("smallest number:%d",b);
}
 else {
    printf("smallest number:%d",c);
}
return 0;
}