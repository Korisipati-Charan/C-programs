#include <stdio.h>

int main() {
    float base;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    float height;
    printf("Enter the height of the triangle: ");
     scanf("%f", &height);
    float area = base * height * 1/2;
    printf("Area of the triangle: %f\n", area);
    return 0;
}