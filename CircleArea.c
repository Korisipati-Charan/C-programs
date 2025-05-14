#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = radius * radius * 3.14;
    printf("Area of the circle: %f\n", area);
    return 0;
}