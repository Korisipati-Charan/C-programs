#include <stdio.h>

int main() {
    float length;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    float breadth;
    printf("Enter the breadth of the rectangle: ");
     scanf("%f", &breadth);
    float area = 2*length + 2*breadth;
    printf("Perimeter of the rectangle: %f\n", area);
    return 0;
}