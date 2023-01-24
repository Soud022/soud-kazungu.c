//program to find area of a circle
#include <stdio.h>
int main() {
    float radius,area;
    printf("\n enter the radius:");
    scanf("%f",&radius);
    area=3.142*radius*radius;
    printf("\n the area is %f",area);

    return 0;
}