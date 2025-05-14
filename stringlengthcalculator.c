#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void printstring(char arr[]);
int countlength(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("length is :%d",countlength(name));
    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\n';i++){
        printf("%c",arr[i]);
    }
}
int countlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}