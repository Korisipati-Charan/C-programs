#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
char ch;
printf("enter the English Letter: ");
scanf("%c",&ch);
if (ch>='A' && ch<='Z'){
    printf("upper case");
}
else if (ch>='a' && ch<='z'){
    printf("lower case");
}
else{
    printf("it is not a english letter");
}
return 0;
} 