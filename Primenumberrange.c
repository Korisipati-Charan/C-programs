#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int L;
    printf("Enter the lower limit: ");
    scanf("%d",&L);
    int U;
    printf("Enter the upper limit: ");
    scanf("%d",&U);
    int i=L;
    while (i>=L && i<=U){
        int count=0;
        for(int a=1;a<=i;a+=1){
            if (i%a==0){
                count=count+1;
            }
        }
        if (count==2){
            printf("%d\n",i);
        }
        i+=1;
    }
    return 0;
}